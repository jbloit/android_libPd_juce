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

private:
    //==============================================================================
    // Your private member variables go here...



     ScopedPointer<pd::PdBase> pd;
    bool isPdComputingAudio = false;
    File patchfile;
    pd::Patch patch;
    float inbuf[64], outbuf[128];
    String status = "status string";
    bool patchLoadError = false;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)
};
