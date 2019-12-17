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

    pd = new pd::PdBase;

    int srate = 44100;
    if(!pd->init(1, 2, srate, true)) {
        cerr << "Could not init pd" << endl;
        exit(1);
    }


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

     DBG( "status: " << status );
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
}

void MainComponent::getNextAudioBlock (const AudioSourceChannelInfo& bufferToFill)
{
    // Your audio-processing code goes here!

    // For more details, see the help for AudioProcessor::getNextAudioBlock()

    // Right now we are not producing any data, in which case we need to clear the buffer
    // (to prevent the output of random noise)
    bufferToFill.clearActiveBufferRegion();
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
