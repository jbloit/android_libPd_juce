/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"

using namespace std;
using namespace pd;

//==============================================================================
MainComponent::MainComponent()
{
    // Make sure you set the size of the component after
    // you add any child components.
    setSize (800, 600);

        // Specify the number of input and output channels that we want to open
        setAudioChannels (0, 2);

    // init pd
    //
    // set 4th arg to true for queued message passing using an internal ringbuffer
    //
    // in this test, messages should return immediately when not queued otherwise
    // they should all return at once when pd is processing at the end of this
    // function
    //


    patchfile = File::getSpecialLocation(File::userApplicationDataDirectory).getChildFile("whatever.pd");
    patchfile.create();


    if (patchfile.hasWriteAccess()){
        DBG( "patch file write access");
    } else {
        DBG( "patch file NOT write access");
    }


    DBG( "patch file : " << patchfile.getFullPathName() );

    FileOutputStream stream (patchfile);
    bool writeOk = false;
    if (stream.openedOk()){
        stream.setPosition (0);
        stream.truncate();
        writeOk = stream.write(BinaryData::test_pd, BinaryData::test_pdSize);
        stream.flush() ;
    }
    if(writeOk){
        DBG( "patch file write ok");
    } else {
        DBG( "patch file write NOT ok");
    }
    DBG( "patch file size: " << patchfile.getSize() );


    setPatchFile(patchfile);
    reloadPatch(NULL);

}

MainComponent::~MainComponent()
{
    // This shuts down the audio device and clears the audio source.
    shutdownAudio();
}

//==============================================================================
void MainComponent::prepareToPlay (int samplesPerBlockExpected, double sampleRate)
{
    // This function will be called when the audio device is started, or when
    // its settings (i.e. sample rate, block size, etc) are changed.

    // You can use this function to initialise any resources you might need,
    // but be careful - it will be called on the audio thread, not the GUI thread.

    // For more details, see the help for AudioProcessor::prepareToPlay()
    cachedSampleRate = sampleRate;
    DBG("DEVICE SAMPLE RATE: " << sampleRate);

}

void MainComponent::getNextAudioBlock (const AudioSourceChannelInfo& bufferToFill)
{
    // Your audio-processing code goes here!


    if (isPdComputingAudio){

        int len = bufferToFill.numSamples;
        int idx = 0;

        // this can be mono on devices where there is only one Speaker, or stereo when headphones are plugged in.
        int deviceOutputChennelCount = bufferToFill.buffer->getNumChannels();
        int stride = deviceOutputChennelCount > 1 ? 1 : 2;

        //DBG("CHANNEL COUNT : " << deviceOutputChennelCount);

        while (len > 0)
        {
            int max = jmin (len, pd->blockSize());

            pd->processFloat (1, pdInBuffer.getData(), pdOutBuffer.getData());

            /* write-back */

            {
                const float* srcBuffer = pdOutBuffer.getData();
                for (int i = 0; i < max; ++i)
                {

                    for (int channelIndex = 0; channelIndex < deviceOutputChennelCount; ++channelIndex){
                        bufferToFill.buffer->getWritePointer(channelIndex) [idx + i] = *srcBuffer;
                        srcBuffer += stride;
                    }
                }
            }


            idx += max;
            len -= max;
        }
    } else {
        bufferToFill.clearActiveBufferRegion();
    }

}

void MainComponent::releaseResources()
{
    // This will be called when the audio device stops, or when it is being
    // restarted due to a setting change.

    // For more details, see the help for AudioProcessor::releaseResources()
}

//==============================================================================
void MainComponent::paint (Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));

    // You can add your drawing code here!
}

void MainComponent::resized()
{
    // This is called when the MainContentComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.
}


void MainComponent::reloadPatch (double sampleRate)
{

    if (sampleRate) {
        cachedSampleRate = sampleRate;
    } else {
        sampleRate = cachedSampleRate;
    }



    if (pd) {
        pd->computeAudio(false);
        isPdComputingAudio = false;
        pd->closePatch(patch);
    }

    DBG("INIT PD WITH " << numInputs << " ins " << numOutputs << " outs & SR = " << sampleRate);
    pd = new pd::PdBase;
    pd->init (numInputs, numOutputs, sampleRate);

    //receiver = new PatchReceiver;
    //pd->setReceiver(receiver);


    pdInBuffer.calloc (pd->blockSize() * numInputs);
    pdOutBuffer.calloc (pd->blockSize() * numOutputs);


    if (!patchfile.exists()) {
        if (patchfile.getFullPathName().toStdString() != "") {
            status = "File does not exist";
        }
        // else keeps select patch message
        return;
    }

    if (patchfile.isDirectory()) {
        status = "You selected a directory";
        return;
    }

    patch = pd->openPatch (patchfile.getFileName().toStdString(), patchfile.getParentDirectory().getFullPathName().toStdString());

    if (patch.isValid()) {
        pd->computeAudio (true);
        isPdComputingAudio = true;
        if(!patchLoadError) {
            status = "Patch loaded successfully";
        }
        patchLoadError = false;
    } else {
        status = "Selected patch is not valid";
        patchLoadError = true;
    }

}

void MainComponent::setPatchFile(File file)
{
    patchfile = file;
}

File MainComponent::getPatchFile()
{
    return patchfile;
}



