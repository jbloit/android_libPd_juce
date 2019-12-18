/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PdBase.hpp"
//==============================================================================
/*
    This component lives inside our window, and this is where you should put all
    your controls and content.
*/


using namespace pd;

class MainComponent   : public AudioAppComponent
{
public:
    //==============================================================================
    MainComponent();
    ~MainComponent();

    //==============================================================================
    void prepareToPlay (int samplesPerBlockExpected, double sampleRate) override;
    void getNextAudioBlock (const AudioSourceChannelInfo& bufferToFill) override;
    void releaseResources() override;

    //==============================================================================
    void paint (Graphics& g) override;
    void resized() override;



    // Pure data
    void reloadPatch(double sampleRate);
    void setPatchFile(File file);
    File getPatchFile();
        bool patchLoadError = false;
    bool isPdComputingAudio = false;
    void updateAngleDelta();

private:
    //==============================================================================
    // Your private member variables go here...

    int numOutputs = 2;
    int numInputs = 0;

    ScopedPointer<pd::PdBase> pd;

    File patchfile;
    pd::Patch patch;
    String status = "status string";


    HeapBlock<float> pdInBuffer, pdOutBuffer;
    double cachedSampleRate;
    double currentAngle = 0.0, angleDelta = 0.0;

    int pdSampleIndex = 0;              // current read index in pd output buffer
    bool consumedPdOutBuffer = true;    // are we out of samples from PD?

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)
};
