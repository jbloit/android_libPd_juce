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


    File assetsDir = File::getSpecialLocation(File::userApplicationDataDirectory).getChildFile("ovaom");
    if (assetsDir.exists()){
        bool deletedDir = assetsDir.deleteRecursively();
        DBG("DO Delete assets dir");
        if (deletedDir){
           DBG("Deleted assets dir");
        } else {
            DBG("could NOT delete assets dir");
        }
    }

    const Result createdAssetsDir = assetsDir.createDirectory();
    if (createdAssetsDir.wasOk()){
        DBG( "assets : created assets directory");
    } else {
        DBG( "assets : could NOT create assets directory: " << createdAssetsDir.getErrorMessage() );
    }

    int assetsCount = BinaryData::namedResourceListSize;
    for (int i=0; i < assetsCount; ++i){
        String fileName = String(BinaryData::originalFilenames[i]);
        assetFile = assetsDir.getChildFile(BinaryData::originalFilenames[i]);
        assetFile.create();
        FileOutputStream stream (assetFile);

        bool writeOk = false;
        if (stream.openedOk()){
            stream.setPosition (0);
            stream.truncate();
            int numBytes = 0;
            BinaryData::getNamedResource(BinaryData::namedResourceList[i], numBytes);
            writeOk = stream.write(BinaryData::getNamedResource(BinaryData::namedResourceList[i], numBytes), numBytes);
            stream.flush() ;
        }

            if(writeOk){
                DBG( "patch file write ok");
            } else {
                DBG( "patch file write NOT ok");
            }

        if (fileName.compare("test.pd") == 0){
         //   setPatchFile(assetFile);
            DBG( "FOUND MAIN PATCH");
            setPatchFile(assetFile);
        }
    }

/*
    patchFile = File::getSpecialLocation(File::userApplicationDataDirectory).getChildFile("whatever.pd");
    patchFile.create();

    if (patchFile.hasWriteAccess()){
        DBG( "patch file write access");
    } else {
        DBG( "patch file NOT write access");
    }


    DBG( "patch file : " << patchFile.getFullPathName() );

    FileOutputStream stream (patchFile);
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
*/


    DBG( "patch file size: " << patchFile.getSize() );

    DBG( "patch file : " << patchFile.getFullPathName() );

    //setPatchFile(patchFile);
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
    DBG("DEVICE SAMPLES PER BLOCK: " << samplesPerBlockExpected);
    updateAngleDelta();


}

void MainComponent::getNextAudioBlock (const AudioSourceChannelInfo& bufferToFill)
{
    // Your audio-processing code goes here!


    if (isPdComputingAudio){

        int deviceOutputChannelCount = bufferToFill.buffer->getNumChannels();
        int stride = deviceOutputChannelCount > 1 ? 1 : 2;
        const float* srcBuffer = pdOutBuffer.getData();
        DBG("AUDIO CB");


        for (auto sample = 0; sample < bufferToFill.numSamples; ++sample)

        {
            if ( consumedPdOutBuffer ) {
                pd->processFloat (1, pdInBuffer.getData(), pdOutBuffer.getData());
                consumedPdOutBuffer = false;
                pdSampleIndex = 0;
            }

            for (int channelIndex = 0; channelIndex < deviceOutputChannelCount; ++channelIndex){
                bufferToFill.buffer->getWritePointer(channelIndex) [sample] = *(srcBuffer + pdSampleIndex);
                pdSampleIndex += stride;
            }

            if (pdSampleIndex >= pd->blockSize() * numOutputs - 1){
                consumedPdOutBuffer = true;
            }
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

    DBG("ALLOCATE pdOutBuffer with size " << pd->blockSize() << " * " <<  numOutputs);


    if (!patchFile.exists()) {
        if (patchFile.getFullPathName().toStdString() != "") {
            status = "File does not exist";
        }
        // else keeps select patch message
        return;
    }

    if (patchFile.isDirectory()) {
        status = "You selected a directory";
        return;
    }

    patch = pd->openPatch (patchFile.getFileName().toStdString(), patchFile.getParentDirectory().getFullPathName().toStdString());

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
    patchFile = file;
}

File MainComponent::getPatchFile()
{
    return patchFile;
}

void MainComponent::updateAngleDelta()
{
    auto cyclesPerSample = 440 / cachedSampleRate;         // [2]
    angleDelta = cyclesPerSample * 2.0 * MathConstants<double>::pi;                // [3]
}

