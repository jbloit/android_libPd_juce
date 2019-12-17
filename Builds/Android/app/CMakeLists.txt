# Automatically generated makefile, created by the Projucer
# Don't edit this file! Your changes will be overwritten when you re-save the Projucer project!

cmake_minimum_required(VERSION 3.4.1)

SET(BINARY_NAME "juce_jni")

add_library("cpufeatures" STATIC "${ANDROID_NDK}/sources/android/cpufeatures/cpu-features.c")
set_source_files_properties("${ANDROID_NDK}/sources/android/cpufeatures/cpu-features.c" PROPERTIES COMPILE_FLAGS "-Wno-sign-conversion -Wno-gnu-statement-expression")

add_definitions("-DJUCE_ANDROID=1" "-DJUCE_ANDROID_API_VERSION=16" "-DJUCE_PUSH_NOTIFICATIONS=1" "-DJUCE_PUSH_NOTIFICATIONS_ACTIVITY=\"com/roli/juce/JuceActivity\"" "-DJUCER_ANDROIDSTUDIO_7F0E4A25=1" "-DJUCE_APP_VERSION=1.0.0" "-DJUCE_APP_VERSION_HEX=0x10000")

include_directories( AFTER
    "../../../JuceLibraryCode"
    "/Users/bloit/LIBS/JUCE/modules"
    "${ANDROID_NDK}/sources/android/cpufeatures"
)

enable_language(ASM)

IF(JUCE_BUILD_CONFIGURATION MATCHES "DEBUG")
    add_definitions("-DDEBUG=1" "-D_DEBUG=1")
ELSEIF(JUCE_BUILD_CONFIGURATION MATCHES "RELEASE")
    add_definitions("-DNDEBUG=1")
ELSE(JUCE_BUILD_CONFIGURATION MATCHES "DEBUG")
    MESSAGE( FATAL_ERROR "No matching build-configuration found." )
ENDIF(JUCE_BUILD_CONFIGURATION MATCHES "DEBUG")

add_library( libpd
        SHARED
        IMPORTED )


set_target_properties(
        # Specifies the target library.
        libpd

        # Specifies the parameter you want to define.
        PROPERTIES IMPORTED_LOCATION

        # Provides the path to the library you want to import.
        ${PROJECT_SOURCE_DIR}/../../../libpd/jni/${ANDROID_ABI}/libpd.so )

include_directories( ${PROJECT_SOURCE_DIR}/../../../libpd/pure-data/src/ )
include_directories( ${PROJECT_SOURCE_DIR}/../../../libpd/libpd_wrapper )
include_directories( ${PROJECT_SOURCE_DIR}/../../../libpd/libpd_wrapper/util )
include_directories( ${PROJECT_SOURCE_DIR}/../../../libpd/cpp )

add_library( ${BINARY_NAME}

    SHARED

    "../../../patches/test.pd"
    "../../../Source/MainComponent.h"
    "../../../Source/MainComponent.cpp"
    "../../../Source/Main.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/audio_play_head/juce_AudioPlayHead.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/buffers/juce_AudioChannelSet.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/buffers/juce_AudioChannelSet.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/buffers/juce_AudioDataConverters.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/buffers/juce_AudioDataConverters.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/buffers/juce_AudioProcessLoadMeasurer.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/buffers/juce_AudioProcessLoadMeasurer.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/buffers/juce_AudioSampleBuffer.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/buffers/juce_FloatVectorOperations.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/buffers/juce_FloatVectorOperations.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/midi/juce_MidiBuffer.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/midi/juce_MidiBuffer.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/midi/juce_MidiFile.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/midi/juce_MidiFile.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/midi/juce_MidiKeyboardState.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/midi/juce_MidiKeyboardState.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/midi/juce_MidiMessage.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/midi/juce_MidiMessage.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/midi/juce_MidiMessageSequence.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/midi/juce_MidiMessageSequence.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/midi/juce_MidiRPN.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/midi/juce_MidiRPN.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/mpe/juce_MPEInstrument.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/mpe/juce_MPEInstrument.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/mpe/juce_MPEMessages.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/mpe/juce_MPEMessages.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/mpe/juce_MPENote.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/mpe/juce_MPENote.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiser.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiser.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserBase.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserBase.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserVoice.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserVoice.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/mpe/juce_MPEUtils.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/mpe/juce_MPEUtils.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/mpe/juce_MPEValue.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/mpe/juce_MPEValue.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/mpe/juce_MPEZoneLayout.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/mpe/juce_MPEZoneLayout.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/native/juce_mac_CoreAudioLayouts.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/sources/juce_AudioSource.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/sources/juce_BufferingAudioSource.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/sources/juce_BufferingAudioSource.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/sources/juce_ChannelRemappingAudioSource.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/sources/juce_ChannelRemappingAudioSource.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/sources/juce_IIRFilterAudioSource.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/sources/juce_IIRFilterAudioSource.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/sources/juce_MemoryAudioSource.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/sources/juce_MemoryAudioSource.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/sources/juce_MixerAudioSource.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/sources/juce_MixerAudioSource.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/sources/juce_PositionableAudioSource.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/sources/juce_ResamplingAudioSource.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/sources/juce_ResamplingAudioSource.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/sources/juce_ReverbAudioSource.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/sources/juce_ReverbAudioSource.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/sources/juce_ToneGeneratorAudioSource.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/sources/juce_ToneGeneratorAudioSource.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/synthesisers/juce_Synthesiser.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/synthesisers/juce_Synthesiser.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/utilities/juce_ADSR.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/utilities/juce_CatmullRomInterpolator.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/utilities/juce_CatmullRomInterpolator.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/utilities/juce_Decibels.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/utilities/juce_IIRFilter.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/utilities/juce_IIRFilter.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/utilities/juce_LagrangeInterpolator.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/utilities/juce_LagrangeInterpolator.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/utilities/juce_Reverb.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/utilities/juce_SmoothedValue.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/utilities/juce_SmoothedValue.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/juce_audio_basics.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/juce_audio_basics.mm"
    "../../../../../../LIBS/JUCE/modules/juce_audio_basics/juce_audio_basics.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_devices/audio_io/juce_AudioDeviceManager.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_devices/audio_io/juce_AudioDeviceManager.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODevice.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODevice.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODeviceType.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODeviceType.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_devices/audio_io/juce_SystemAudioVolume.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_devices/midi_io/juce_MidiDevices.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_devices/midi_io/juce_MidiDevices.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_devices/midi_io/juce_MidiMessageCollector.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_devices/midi_io/juce_MidiMessageCollector.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_devices/native/juce_android_Audio.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_devices/native/juce_android_Midi.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_devices/native/juce_android_Oboe.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_devices/native/juce_android_OpenSL.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_devices/native/juce_ios_Audio.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_devices/native/juce_ios_Audio.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_devices/native/juce_linux_ALSA.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_devices/native/juce_linux_Bela.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_devices/native/juce_linux_JackAudio.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_devices/native/juce_linux_Midi.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_devices/native/juce_mac_CoreAudio.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_devices/native/juce_mac_CoreMidi.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_devices/native/juce_MidiDataConcatenator.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_devices/native/juce_win32_ASIO.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_devices/native/juce_win32_DirectSound.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_devices/native/juce_win32_Midi.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_devices/native/juce_win32_WASAPI.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_devices/sources/juce_AudioSourcePlayer.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_devices/sources/juce_AudioSourcePlayer.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_devices/sources/juce_AudioTransportSource.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_devices/sources/juce_AudioTransportSource.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_devices/juce_audio_devices.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_devices/juce_audio_devices.mm"
    "../../../../../../LIBS/JUCE/modules/juce_audio_devices/juce_audio_devices.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/all.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitmath.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitreader.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitwriter.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/cpu.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/crc.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/fixed.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/float.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/format.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/lpc.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/md5.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/memory.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/metadata.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/stream_encoder.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/stream_encoder_framing.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/window.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/all.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/stream_decoder.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/stream_encoder.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitmath.c"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitreader.c"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitwriter.c"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/cpu.c"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/crc.c"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/fixed.c"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/float.c"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/format.c"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/lpc_flac.c"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/md5.c"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/memory.c"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_decoder.c"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_encoder.c"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_encoder_framing.c"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/window_flac.c"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/all.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/alloc.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/assert.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/callback.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/compat.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/endswap.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/export.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/Flac Licence.txt"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/format.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/metadata.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/ordinals.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/stream_decoder.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/stream_encoder.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/win_utf8_io.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/coupled/res_books_51.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/coupled/res_books_stereo.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/floor/floor_books.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/uncoupled/res_books_uncoupled.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/floor_all.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_8.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_11.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_16.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_44.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_8.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_16.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44p51.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44u.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_8.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_11.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_16.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_22.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_32.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44p51.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44u.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_X.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/analysis.c"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/backends.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/bitrate.c"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/bitrate.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/block.c"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codebook.c"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codebook.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codec_internal.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/envelope.c"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/envelope.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/floor0.c"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/floor1.c"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/highlevel.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/info.c"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup.c"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup_data.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lpc.c"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lpc.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lsp.c"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lsp.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mapping0.c"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/masking.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mdct.c"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mdct.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/misc.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/os.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/psy.c"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/psy.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/registry.c"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/registry.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/res0.c"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/scales.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/sharedbook.c"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/smallft.c"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/smallft.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/synthesis.c"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/vorbisenc.c"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/vorbisfile.c"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/window.c"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/window.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/bitwise.c"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/codec.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/config_types.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/framing.c"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/Ogg Vorbis Licence.txt"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/ogg.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/os_types.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/vorbisenc.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/vorbisfile.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/juce_AiffAudioFormat.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/juce_AiffAudioFormat.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/juce_CoreAudioFormat.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/juce_CoreAudioFormat.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/juce_FlacAudioFormat.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/juce_FlacAudioFormat.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/juce_LAMEEncoderAudioFormat.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/juce_LAMEEncoderAudioFormat.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/juce_MP3AudioFormat.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/juce_MP3AudioFormat.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/juce_OggVorbisAudioFormat.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/juce_OggVorbisAudioFormat.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/juce_WavAudioFormat.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/juce_WavAudioFormat.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/juce_WindowsMediaAudioFormat.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/juce_WindowsMediaAudioFormat.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/format/juce_AudioFormat.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/format/juce_AudioFormat.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/format/juce_AudioFormatManager.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/format/juce_AudioFormatManager.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReader.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReader.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReaderSource.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReaderSource.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/format/juce_AudioFormatWriter.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/format/juce_AudioFormatWriter.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/format/juce_AudioSubsectionReader.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/format/juce_AudioSubsectionReader.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/format/juce_BufferingAudioFormatReader.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/format/juce_BufferingAudioFormatReader.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/format/juce_MemoryMappedAudioFormatReader.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/sampler/juce_Sampler.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/sampler/juce_Sampler.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/juce_audio_formats.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/juce_audio_formats.mm"
    "../../../../../../LIBS/JUCE/modules/juce_audio_formats/juce_audio_formats.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormat.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormat.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormatManager.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormatManager.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/baseiids.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/classfactoryhelpers.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fbuffer.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fbuffer.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fdebug.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fdebug.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fobject.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fobject.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstreamer.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstreamer.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstring.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstring.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/updatehandler.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/updatehandler.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/thread/include/flock.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/thread/source/flock.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/LICENSE.txt"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/README.md"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/conststringtable.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/conststringtable.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/coreiids.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/falignpop.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/falignpush.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/fplatform.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/fstrdefs.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ftypes.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/funknown.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/funknown.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/futils.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/fvariant.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ibstream.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/icloneable.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ipersistent.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ipluginbase.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/istringresult.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/iupdatehandler.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/smartpointer.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/typesizecheck.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ustring.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ustring.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/gui/iplugview.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/gui/iplugviewcontentscalesupport.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstattributes.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstaudioprocessor.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstautomationstate.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstchannelcontextinfo.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstcomponent.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstcontextmenu.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivsteditcontroller.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstevents.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivsthostapplication.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstinterappaudio.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstmessage.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstmidicontrollers.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstmidilearn.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstnoteexpression.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstparameterchanges.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstphysicalui.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstpluginterfacesupport.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstplugview.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstprefetchablesupport.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstprocesscontext.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstrepresentation.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivsttestplugprovider.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstunits.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/vstpshpack4.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/vstspeaker.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/vsttypes.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/LICENSE.txt"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/README.md"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/memorystream.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/memorystream.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/pluginview.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/pluginview.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/hosting/hostclasses.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/hosting/hostclasses.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/hosting/pluginterfacesupport.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/hosting/pluginterfacesupport.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstbus.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstbus.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponent.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponent.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponentbase.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponentbase.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vsteditcontroller.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vsteditcontroller.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstinitiids.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstparameters.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstparameters.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstpresetfile.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstpresetfile.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/LICENSE.txt"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/README.md"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/LICENSE.txt"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/README.md"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/juce_AU_Shared.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/juce_AudioUnitPluginFormat.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/juce_AudioUnitPluginFormat.mm"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/juce_LADSPAPluginFormat.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/juce_LADSPAPluginFormat.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/juce_LegacyAudioParameter.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/juce_VST3Common.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/juce_VST3Headers.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/juce_VST3PluginFormat.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/juce_VST3PluginFormat.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/juce_VSTCommon.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/juce_VSTMidiEventList.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/juce_VSTPluginFormat.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/juce_VSTPluginFormat.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/processors/juce_AudioPluginInstance.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/processors/juce_AudioPluginInstance.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessor.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessor.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorEditor.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorEditor.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorGraph.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorGraph.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorListener.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorParameter.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorParameterGroup.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorParameterGroup.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/processors/juce_GenericAudioProcessorEditor.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/processors/juce_GenericAudioProcessorEditor.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/processors/juce_PluginDescription.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/processors/juce_PluginDescription.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/scanning/juce_KnownPluginList.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/scanning/juce_KnownPluginList.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/scanning/juce_PluginDirectoryScanner.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/scanning/juce_PluginDirectoryScanner.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/scanning/juce_PluginListComponent.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/scanning/juce_PluginListComponent.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterBool.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterBool.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterChoice.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterChoice.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterFloat.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterFloat.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterInt.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterInt.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorParameterWithID.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorParameterWithID.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorValueTreeState.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorValueTreeState.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/utilities/juce_RangedAudioParameter.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/utilities/juce_RangedAudioParameter.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/juce_audio_processors.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/juce_audio_processors.mm"
    "../../../../../../LIBS/JUCE/modules/juce_audio_processors/juce_audio_processors.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_utils/audio_cd/juce_AudioCDBurner.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_utils/audio_cd/juce_AudioCDReader.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_utils/audio_cd/juce_AudioCDReader.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_utils/gui/juce_AudioAppComponent.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_utils/gui/juce_AudioAppComponent.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_utils/gui/juce_AudioDeviceSelectorComponent.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_utils/gui/juce_AudioDeviceSelectorComponent.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnail.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnail.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnailBase.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnailCache.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnailCache.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_utils/gui/juce_AudioVisualiserComponent.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_utils/gui/juce_AudioVisualiserComponent.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_utils/gui/juce_BluetoothMidiDevicePairingDialogue.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_utils/gui/juce_MidiKeyboardComponent.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_utils/gui/juce_MidiKeyboardComponent.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_utils/native/juce_android_BluetoothMidiDevicePairingDialogue.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_utils/native/juce_ios_BluetoothMidiDevicePairingDialogue.mm"
    "../../../../../../LIBS/JUCE/modules/juce_audio_utils/native/juce_linux_AudioCDReader.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_utils/native/juce_linux_BluetoothMidiDevicePairingDialogue.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_utils/native/juce_mac_AudioCDBurner.mm"
    "../../../../../../LIBS/JUCE/modules/juce_audio_utils/native/juce_mac_AudioCDReader.mm"
    "../../../../../../LIBS/JUCE/modules/juce_audio_utils/native/juce_mac_BluetoothMidiDevicePairingDialogue.mm"
    "../../../../../../LIBS/JUCE/modules/juce_audio_utils/native/juce_win_BluetoothMidiDevicePairingDialogue.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_utils/native/juce_win32_AudioCDBurner.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_utils/native/juce_win32_AudioCDReader.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_utils/players/juce_AudioProcessorPlayer.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_utils/players/juce_AudioProcessorPlayer.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_utils/players/juce_SoundPlayer.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_utils/players/juce_SoundPlayer.h"
    "../../../../../../LIBS/JUCE/modules/juce_audio_utils/juce_audio_utils.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_audio_utils/juce_audio_utils.mm"
    "../../../../../../LIBS/JUCE/modules/juce_audio_utils/juce_audio_utils.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/containers/juce_AbstractFifo.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/containers/juce_AbstractFifo.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/containers/juce_Array.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/containers/juce_ArrayAllocationBase.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/containers/juce_ArrayBase.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/containers/juce_ArrayBase.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/containers/juce_DynamicObject.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/containers/juce_DynamicObject.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/containers/juce_ElementComparator.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/containers/juce_HashMap.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/containers/juce_HashMap_test.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/containers/juce_LinkedListPointer.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/containers/juce_ListenerList.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/containers/juce_NamedValueSet.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/containers/juce_NamedValueSet.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/containers/juce_OwnedArray.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/containers/juce_OwnedArray.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/containers/juce_PropertySet.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/containers/juce_PropertySet.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/containers/juce_ReferenceCountedArray.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/containers/juce_ReferenceCountedArray.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/containers/juce_ScopedValueSetter.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/containers/juce_SortedSet.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/containers/juce_SparseSet.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/containers/juce_SparseSet.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/containers/juce_Variant.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/containers/juce_Variant.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/files/juce_DirectoryIterator.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/files/juce_DirectoryIterator.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/files/juce_File.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/files/juce_File.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/files/juce_FileFilter.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/files/juce_FileFilter.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/files/juce_FileInputStream.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/files/juce_FileInputStream.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/files/juce_FileOutputStream.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/files/juce_FileOutputStream.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/files/juce_FileSearchPath.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/files/juce_FileSearchPath.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/files/juce_MemoryMappedFile.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/files/juce_TemporaryFile.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/files/juce_TemporaryFile.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/files/juce_WildcardFileFilter.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/files/juce_WildcardFileFilter.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/javascript/juce_Javascript.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/javascript/juce_Javascript.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/javascript/juce_JSON.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/javascript/juce_JSON.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/logging/juce_FileLogger.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/logging/juce_FileLogger.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/logging/juce_Logger.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/logging/juce_Logger.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/maths/juce_BigInteger.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/maths/juce_BigInteger.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/maths/juce_Expression.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/maths/juce_Expression.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/maths/juce_MathsFunctions.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/maths/juce_NormalisableRange.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/maths/juce_Random.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/maths/juce_Random.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/maths/juce_Range.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/maths/juce_StatisticsAccumulator.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/memory/juce_Atomic.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/memory/juce_ByteOrder.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/memory/juce_ContainerDeletePolicy.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/memory/juce_HeapBlock.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/memory/juce_HeavyweightLeakedObjectDetector.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/memory/juce_LeakedObjectDetector.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/memory/juce_Memory.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/memory/juce_MemoryBlock.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/memory/juce_MemoryBlock.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/memory/juce_OptionalScopedPointer.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/memory/juce_ReferenceCountedObject.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/memory/juce_ScopedPointer.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/memory/juce_SharedResourcePointer.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/memory/juce_Singleton.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/memory/juce_WeakReference.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/misc/juce_ConsoleApplication.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/misc/juce_ConsoleApplication.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/misc/juce_Result.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/misc/juce_Result.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/misc/juce_RuntimePermissions.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/misc/juce_RuntimePermissions.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/misc/juce_StdFunctionCompat.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/misc/juce_StdFunctionCompat.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/misc/juce_Uuid.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/misc/juce_Uuid.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/misc/juce_WindowsRegistry.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/native/java/README.txt"
    "../../../../../../LIBS/JUCE/modules/juce_core/native/juce_android_Files.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/native/juce_android_JNIHelpers.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/native/juce_android_JNIHelpers.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/native/juce_android_Misc.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/native/juce_android_Network.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/native/juce_android_RuntimePermissions.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/native/juce_android_SystemStats.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/native/juce_android_Threads.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/native/juce_BasicNativeHeaders.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/native/juce_curl_Network.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/native/juce_linux_CommonFile.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/native/juce_linux_Files.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/native/juce_linux_Network.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/native/juce_linux_SystemStats.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/native/juce_linux_Threads.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/native/juce_mac_ClangBugWorkaround.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/native/juce_mac_Files.mm"
    "../../../../../../LIBS/JUCE/modules/juce_core/native/juce_mac_Network.mm"
    "../../../../../../LIBS/JUCE/modules/juce_core/native/juce_mac_Strings.mm"
    "../../../../../../LIBS/JUCE/modules/juce_core/native/juce_mac_SystemStats.mm"
    "../../../../../../LIBS/JUCE/modules/juce_core/native/juce_mac_Threads.mm"
    "../../../../../../LIBS/JUCE/modules/juce_core/native/juce_osx_ObjCHelpers.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/native/juce_posix_IPAddress.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/native/juce_posix_NamedPipe.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/native/juce_posix_SharedCode.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/native/juce_win32_ComSmartPtr.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/native/juce_win32_Files.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/native/juce_win32_Network.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/native/juce_win32_Registry.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/native/juce_win32_SystemStats.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/native/juce_win32_Threads.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/network/juce_IPAddress.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/network/juce_IPAddress.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/network/juce_MACAddress.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/network/juce_MACAddress.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/network/juce_NamedPipe.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/network/juce_NamedPipe.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/network/juce_Socket.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/network/juce_Socket.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/network/juce_URL.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/network/juce_URL.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/network/juce_WebInputStream.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/network/juce_WebInputStream.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/streams/juce_BufferedInputStream.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/streams/juce_BufferedInputStream.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/streams/juce_FileInputSource.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/streams/juce_FileInputSource.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/streams/juce_InputSource.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/streams/juce_InputStream.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/streams/juce_InputStream.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/streams/juce_MemoryInputStream.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/streams/juce_MemoryInputStream.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/streams/juce_MemoryOutputStream.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/streams/juce_MemoryOutputStream.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/streams/juce_OutputStream.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/streams/juce_OutputStream.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/streams/juce_SubregionStream.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/streams/juce_SubregionStream.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/streams/juce_URLInputSource.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/streams/juce_URLInputSource.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/system/juce_CompilerSupport.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/system/juce_PlatformDefs.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/system/juce_StandardHeader.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/system/juce_SystemStats.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/system/juce_SystemStats.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/system/juce_TargetPlatform.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/text/juce_Base64.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/text/juce_Base64.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/text/juce_CharacterFunctions.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/text/juce_CharacterFunctions.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/text/juce_CharPointer_ASCII.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/text/juce_CharPointer_UTF8.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/text/juce_CharPointer_UTF16.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/text/juce_CharPointer_UTF32.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/text/juce_Identifier.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/text/juce_Identifier.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/text/juce_LocalisedStrings.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/text/juce_LocalisedStrings.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/text/juce_NewLine.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/text/juce_String.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/text/juce_String.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/text/juce_StringArray.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/text/juce_StringArray.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/text/juce_StringPairArray.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/text/juce_StringPairArray.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/text/juce_StringPool.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/text/juce_StringPool.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/text/juce_StringRef.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/text/juce_TextDiff.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/text/juce_TextDiff.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/threads/juce_ChildProcess.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/threads/juce_ChildProcess.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/threads/juce_CriticalSection.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/threads/juce_DynamicLibrary.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/threads/juce_HighResolutionTimer.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/threads/juce_HighResolutionTimer.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/threads/juce_InterProcessLock.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/threads/juce_Process.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/threads/juce_ReadWriteLock.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/threads/juce_ReadWriteLock.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/threads/juce_ScopedLock.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/threads/juce_ScopedReadLock.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/threads/juce_ScopedWriteLock.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/threads/juce_SpinLock.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/threads/juce_Thread.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/threads/juce_Thread.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/threads/juce_ThreadLocalValue.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/threads/juce_ThreadPool.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/threads/juce_ThreadPool.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/threads/juce_TimeSliceThread.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/threads/juce_TimeSliceThread.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/threads/juce_WaitableEvent.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/time/juce_PerformanceCounter.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/time/juce_PerformanceCounter.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/time/juce_RelativeTime.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/time/juce_RelativeTime.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/time/juce_Time.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/time/juce_Time.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/unit_tests/juce_UnitTest.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/unit_tests/juce_UnitTest.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/unit_tests/juce_UnitTestCategories.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/xml/juce_XmlDocument.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/xml/juce_XmlDocument.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/xml/juce_XmlElement.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/xml/juce_XmlElement.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/zip/zlib/adler32.c"
    "../../../../../../LIBS/JUCE/modules/juce_core/zip/zlib/compress.c"
    "../../../../../../LIBS/JUCE/modules/juce_core/zip/zlib/crc32.c"
    "../../../../../../LIBS/JUCE/modules/juce_core/zip/zlib/crc32.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/zip/zlib/deflate.c"
    "../../../../../../LIBS/JUCE/modules/juce_core/zip/zlib/deflate.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/zip/zlib/infback.c"
    "../../../../../../LIBS/JUCE/modules/juce_core/zip/zlib/inffast.c"
    "../../../../../../LIBS/JUCE/modules/juce_core/zip/zlib/inffast.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/zip/zlib/inffixed.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/zip/zlib/inflate.c"
    "../../../../../../LIBS/JUCE/modules/juce_core/zip/zlib/inflate.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/zip/zlib/inftrees.c"
    "../../../../../../LIBS/JUCE/modules/juce_core/zip/zlib/inftrees.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/zip/zlib/trees.c"
    "../../../../../../LIBS/JUCE/modules/juce_core/zip/zlib/trees.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/zip/zlib/uncompr.c"
    "../../../../../../LIBS/JUCE/modules/juce_core/zip/zlib/zconf.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/zip/zlib/zconf.in.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/zip/zlib/zlib.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/zip/zlib/zutil.c"
    "../../../../../../LIBS/JUCE/modules/juce_core/zip/zlib/zutil.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/zip/juce_GZIPCompressorOutputStream.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/zip/juce_GZIPCompressorOutputStream.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/zip/juce_GZIPDecompressorInputStream.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/zip/juce_GZIPDecompressorInputStream.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/zip/juce_ZipFile.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/zip/juce_ZipFile.h"
    "../../../../../../LIBS/JUCE/modules/juce_core/juce_core.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_core/juce_core.mm"
    "../../../../../../LIBS/JUCE/modules/juce_core/juce_core.h"
    "../../../../../../LIBS/JUCE/modules/juce_cryptography/encryption/juce_BlowFish.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_cryptography/encryption/juce_BlowFish.h"
    "../../../../../../LIBS/JUCE/modules/juce_cryptography/encryption/juce_Primes.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_cryptography/encryption/juce_Primes.h"
    "../../../../../../LIBS/JUCE/modules/juce_cryptography/encryption/juce_RSAKey.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_cryptography/encryption/juce_RSAKey.h"
    "../../../../../../LIBS/JUCE/modules/juce_cryptography/hashing/juce_MD5.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_cryptography/hashing/juce_MD5.h"
    "../../../../../../LIBS/JUCE/modules/juce_cryptography/hashing/juce_SHA256.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_cryptography/hashing/juce_SHA256.h"
    "../../../../../../LIBS/JUCE/modules/juce_cryptography/hashing/juce_Whirlpool.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_cryptography/hashing/juce_Whirlpool.h"
    "../../../../../../LIBS/JUCE/modules/juce_cryptography/juce_cryptography.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_cryptography/juce_cryptography.mm"
    "../../../../../../LIBS/JUCE/modules/juce_cryptography/juce_cryptography.h"
    "../../../../../../LIBS/JUCE/modules/juce_data_structures/app_properties/juce_ApplicationProperties.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_data_structures/app_properties/juce_ApplicationProperties.h"
    "../../../../../../LIBS/JUCE/modules/juce_data_structures/app_properties/juce_PropertiesFile.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_data_structures/app_properties/juce_PropertiesFile.h"
    "../../../../../../LIBS/JUCE/modules/juce_data_structures/undomanager/juce_UndoableAction.h"
    "../../../../../../LIBS/JUCE/modules/juce_data_structures/undomanager/juce_UndoManager.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_data_structures/undomanager/juce_UndoManager.h"
    "../../../../../../LIBS/JUCE/modules/juce_data_structures/values/juce_CachedValue.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_data_structures/values/juce_CachedValue.h"
    "../../../../../../LIBS/JUCE/modules/juce_data_structures/values/juce_Value.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_data_structures/values/juce_Value.h"
    "../../../../../../LIBS/JUCE/modules/juce_data_structures/values/juce_ValueTree.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_data_structures/values/juce_ValueTree.h"
    "../../../../../../LIBS/JUCE/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.h"
    "../../../../../../LIBS/JUCE/modules/juce_data_structures/values/juce_ValueWithDefault.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_data_structures/values/juce_ValueWithDefault.h"
    "../../../../../../LIBS/JUCE/modules/juce_data_structures/juce_data_structures.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_data_structures/juce_data_structures.mm"
    "../../../../../../LIBS/JUCE/modules/juce_data_structures/juce_data_structures.h"
    "../../../../../../LIBS/JUCE/modules/juce_events/broadcasters/juce_ActionBroadcaster.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_events/broadcasters/juce_ActionBroadcaster.h"
    "../../../../../../LIBS/JUCE/modules/juce_events/broadcasters/juce_ActionListener.h"
    "../../../../../../LIBS/JUCE/modules/juce_events/broadcasters/juce_AsyncUpdater.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_events/broadcasters/juce_AsyncUpdater.h"
    "../../../../../../LIBS/JUCE/modules/juce_events/broadcasters/juce_ChangeBroadcaster.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_events/broadcasters/juce_ChangeBroadcaster.h"
    "../../../../../../LIBS/JUCE/modules/juce_events/broadcasters/juce_ChangeListener.h"
    "../../../../../../LIBS/JUCE/modules/juce_events/interprocess/juce_ConnectedChildProcess.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_events/interprocess/juce_ConnectedChildProcess.h"
    "../../../../../../LIBS/JUCE/modules/juce_events/interprocess/juce_InterprocessConnection.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_events/interprocess/juce_InterprocessConnection.h"
    "../../../../../../LIBS/JUCE/modules/juce_events/interprocess/juce_InterprocessConnectionServer.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_events/interprocess/juce_InterprocessConnectionServer.h"
    "../../../../../../LIBS/JUCE/modules/juce_events/interprocess/juce_NetworkServiceDiscovery.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_events/interprocess/juce_NetworkServiceDiscovery.h"
    "../../../../../../LIBS/JUCE/modules/juce_events/messages/juce_ApplicationBase.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_events/messages/juce_ApplicationBase.h"
    "../../../../../../LIBS/JUCE/modules/juce_events/messages/juce_CallbackMessage.h"
    "../../../../../../LIBS/JUCE/modules/juce_events/messages/juce_DeletedAtShutdown.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_events/messages/juce_DeletedAtShutdown.h"
    "../../../../../../LIBS/JUCE/modules/juce_events/messages/juce_Initialisation.h"
    "../../../../../../LIBS/JUCE/modules/juce_events/messages/juce_Message.h"
    "../../../../../../LIBS/JUCE/modules/juce_events/messages/juce_MessageListener.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_events/messages/juce_MessageListener.h"
    "../../../../../../LIBS/JUCE/modules/juce_events/messages/juce_MessageManager.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_events/messages/juce_MessageManager.h"
    "../../../../../../LIBS/JUCE/modules/juce_events/messages/juce_MountedVolumeListChangeDetector.h"
    "../../../../../../LIBS/JUCE/modules/juce_events/messages/juce_NotificationType.h"
    "../../../../../../LIBS/JUCE/modules/juce_events/native/juce_android_Messaging.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_events/native/juce_ios_MessageManager.mm"
    "../../../../../../LIBS/JUCE/modules/juce_events/native/juce_linux_EventLoop.h"
    "../../../../../../LIBS/JUCE/modules/juce_events/native/juce_linux_Messaging.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_events/native/juce_mac_MessageManager.mm"
    "../../../../../../LIBS/JUCE/modules/juce_events/native/juce_osx_MessageQueue.h"
    "../../../../../../LIBS/JUCE/modules/juce_events/native/juce_win32_HiddenMessageWindow.h"
    "../../../../../../LIBS/JUCE/modules/juce_events/native/juce_win32_Messaging.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_events/native/juce_win32_WinRTWrapper.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_events/native/juce_win32_WinRTWrapper.h"
    "../../../../../../LIBS/JUCE/modules/juce_events/timers/juce_MultiTimer.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_events/timers/juce_MultiTimer.h"
    "../../../../../../LIBS/JUCE/modules/juce_events/timers/juce_Timer.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_events/timers/juce_Timer.h"
    "../../../../../../LIBS/JUCE/modules/juce_events/juce_events.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_events/juce_events.mm"
    "../../../../../../LIBS/JUCE/modules/juce_events/juce_events.h"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/colour/juce_Colour.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/colour/juce_Colour.h"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/colour/juce_ColourGradient.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/colour/juce_ColourGradient.h"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/colour/juce_Colours.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/colour/juce_Colours.h"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/colour/juce_FillType.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/colour/juce_FillType.h"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/colour/juce_PixelFormats.h"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/contexts/juce_GraphicsContext.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/contexts/juce_GraphicsContext.h"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsContext.h"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsPostScriptRenderer.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsPostScriptRenderer.h"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsSoftwareRenderer.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsSoftwareRenderer.h"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/effects/juce_DropShadowEffect.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/effects/juce_DropShadowEffect.h"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/effects/juce_GlowEffect.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/effects/juce_GlowEffect.h"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/effects/juce_ImageEffectFilter.h"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/fonts/juce_AttributedString.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/fonts/juce_AttributedString.h"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/fonts/juce_CustomTypeface.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/fonts/juce_CustomTypeface.h"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/fonts/juce_Font.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/fonts/juce_Font.h"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/fonts/juce_GlyphArrangement.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/fonts/juce_GlyphArrangement.h"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/fonts/juce_TextLayout.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/fonts/juce_TextLayout.h"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/fonts/juce_Typeface.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/fonts/juce_Typeface.h"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/geometry/juce_AffineTransform.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/geometry/juce_AffineTransform.h"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/geometry/juce_BorderSize.h"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/geometry/juce_EdgeTable.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/geometry/juce_EdgeTable.h"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/geometry/juce_Line.h"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/geometry/juce_Parallelogram.h"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/geometry/juce_Path.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/geometry/juce_Path.h"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/geometry/juce_PathIterator.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/geometry/juce_PathIterator.h"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/geometry/juce_PathStrokeType.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/geometry/juce_PathStrokeType.h"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/geometry/juce_Point.h"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/geometry/juce_Rectangle.h"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/geometry/juce_RectangleList.h"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/cderror.h"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/changes to libjpeg for JUCE.txt"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jcapimin.c"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jcapistd.c"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jccoefct.c"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jccolor.c"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jcdctmgr.c"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jchuff.c"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jchuff.h"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jcinit.c"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jcmainct.c"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jcmarker.c"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jcmaster.c"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jcomapi.c"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jconfig.h"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jcparam.c"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jcphuff.c"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jcprepct.c"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jcsample.c"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jctrans.c"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jdapimin.c"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jdapistd.c"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jdatasrc.c"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jdcoefct.c"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jdcolor.c"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jdct.h"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jddctmgr.c"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jdhuff.c"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jdhuff.h"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jdinput.c"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jdmainct.c"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jdmarker.c"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jdmaster.c"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jdmerge.c"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jdphuff.c"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jdpostct.c"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jdsample.c"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jdtrans.c"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jerror.c"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jerror.h"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctflt.c"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctfst.c"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctint.c"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jidctflt.c"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jidctfst.c"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jidctint.c"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jidctred.c"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jinclude.h"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jmemmgr.c"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jmemnobs.c"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jmemsys.h"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jmorecfg.h"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jpegint.h"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jpeglib.h"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jquant1.c"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jquant2.c"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jutils.c"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jversion.h"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/transupp.c"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/transupp.h"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/pnglib/libpng_readme.txt"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/pnglib/png.c"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/pnglib/png.h"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/pnglib/pngconf.h"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/pnglib/pngdebug.h"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/pnglib/pngerror.c"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/pnglib/pngget.c"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/pnglib/pnginfo.h"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/pnglib/pngmem.c"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/pnglib/pngpread.c"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/pnglib/pngpriv.h"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/pnglib/pngread.c"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/pnglib/pngrio.c"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/pnglib/pngrtran.c"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/pnglib/pngrutil.c"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/pnglib/pngset.c"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/pnglib/pngstruct.h"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/pnglib/pngtrans.c"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/pnglib/pngwio.c"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/pnglib/pngwrite.c"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/pnglib/pngwtran.c"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/pnglib/pngwutil.c"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/juce_GIFLoader.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/juce_JPEGLoader.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/juce_PNGLoader.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/images/juce_Image.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/images/juce_Image.h"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/images/juce_ImageCache.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/images/juce_ImageCache.h"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/images/juce_ImageConvolutionKernel.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/images/juce_ImageConvolutionKernel.h"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/images/juce_ImageFileFormat.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/images/juce_ImageFileFormat.h"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/native/juce_android_Fonts.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/native/juce_android_GraphicsContext.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/native/juce_android_IconHelpers.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/native/juce_freetype_Fonts.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/native/juce_linux_Fonts.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/native/juce_linux_IconHelpers.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsContext.h"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsContext.mm"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsHelpers.h"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/native/juce_mac_Fonts.mm"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/native/juce_mac_IconHelpers.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/native/juce_RenderingHelpers.h"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/native/juce_win32_Direct2DGraphicsContext.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/native/juce_win32_Direct2DGraphicsContext.h"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/native/juce_win32_DirectWriteTypeface.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/native/juce_win32_DirectWriteTypeLayout.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/native/juce_win32_Fonts.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/native/juce_win32_IconHelpers.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/placement/juce_Justification.h"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/placement/juce_RectanglePlacement.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/placement/juce_RectanglePlacement.h"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/juce_graphics.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/juce_graphics.mm"
    "../../../../../../LIBS/JUCE/modules/juce_graphics/juce_graphics.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/application/juce_Application.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/application/juce_Application.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/buttons/juce_ArrowButton.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/buttons/juce_ArrowButton.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/buttons/juce_Button.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/buttons/juce_Button.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/buttons/juce_DrawableButton.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/buttons/juce_DrawableButton.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/buttons/juce_HyperlinkButton.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/buttons/juce_HyperlinkButton.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/buttons/juce_ImageButton.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/buttons/juce_ImageButton.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/buttons/juce_ShapeButton.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/buttons/juce_ShapeButton.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/buttons/juce_TextButton.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/buttons/juce_TextButton.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/buttons/juce_ToggleButton.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/buttons/juce_ToggleButton.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/buttons/juce_ToolbarButton.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/buttons/juce_ToolbarButton.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandID.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandInfo.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandInfo.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandManager.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandManager.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandTarget.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandTarget.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/commands/juce_KeyPressMappingSet.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/commands/juce_KeyPressMappingSet.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/components/juce_CachedComponentImage.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/components/juce_Component.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/components/juce_Component.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/components/juce_ComponentListener.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/components/juce_ComponentListener.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/components/juce_ModalComponentManager.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/components/juce_ModalComponentManager.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/desktop/juce_Desktop.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/desktop/juce_Desktop.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/desktop/juce_Displays.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/desktop/juce_Displays.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/drawables/juce_Drawable.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/drawables/juce_Drawable.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/drawables/juce_DrawableComposite.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/drawables/juce_DrawableComposite.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/drawables/juce_DrawableImage.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/drawables/juce_DrawableImage.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/drawables/juce_DrawablePath.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/drawables/juce_DrawablePath.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/drawables/juce_DrawableRectangle.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/drawables/juce_DrawableRectangle.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/drawables/juce_DrawableShape.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/drawables/juce_DrawableShape.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/drawables/juce_DrawableText.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/drawables/juce_DrawableText.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/drawables/juce_SVGParser.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/filebrowser/juce_ContentSharer.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/filebrowser/juce_ContentSharer.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsDisplayComponent.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsDisplayComponent.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsList.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsList.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserComponent.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserComponent.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserListener.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooser.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooser.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooserDialogBox.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooserDialogBox.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/filebrowser/juce_FileListComponent.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/filebrowser/juce_FileListComponent.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/filebrowser/juce_FilenameComponent.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/filebrowser/juce_FilenameComponent.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/filebrowser/juce_FilePreviewComponent.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/filebrowser/juce_FileSearchPathListComponent.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/filebrowser/juce_FileSearchPathListComponent.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/filebrowser/juce_FileTreeComponent.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/filebrowser/juce_FileTreeComponent.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/filebrowser/juce_ImagePreviewComponent.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/filebrowser/juce_ImagePreviewComponent.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/keyboard/juce_CaretComponent.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/keyboard/juce_CaretComponent.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/keyboard/juce_KeyboardFocusTraverser.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/keyboard/juce_KeyboardFocusTraverser.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/keyboard/juce_KeyListener.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/keyboard/juce_KeyListener.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/keyboard/juce_KeyPress.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/keyboard/juce_KeyPress.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/keyboard/juce_ModifierKeys.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/keyboard/juce_ModifierKeys.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/keyboard/juce_SystemClipboard.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/keyboard/juce_TextEditorKeyMapper.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/keyboard/juce_TextInputTarget.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_AnimatedPosition.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_AnimatedPositionBehaviours.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_ComponentAnimator.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_ComponentAnimator.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_ComponentBoundsConstrainer.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_ComponentBoundsConstrainer.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_ComponentBuilder.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_ComponentBuilder.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_ComponentMovementWatcher.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_ComponentMovementWatcher.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_ConcertinaPanel.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_ConcertinaPanel.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_FlexBox.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_FlexBox.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_FlexItem.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_Grid.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_Grid.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_GridItem.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_GridItem.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_GroupComponent.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_GroupComponent.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_MultiDocumentPanel.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_MultiDocumentPanel.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_ResizableBorderComponent.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_ResizableBorderComponent.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_ResizableCornerComponent.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_ResizableCornerComponent.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_ResizableEdgeComponent.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_ResizableEdgeComponent.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_ScrollBar.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_ScrollBar.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_SidePanel.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_SidePanel.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutManager.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutManager.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutResizerBar.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutResizerBar.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_StretchableObjectResizer.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_StretchableObjectResizer.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_TabbedButtonBar.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_TabbedButtonBar.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_TabbedComponent.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_TabbedComponent.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_Viewport.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_Viewport.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V1.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V1.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V2.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V2.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V3.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V3.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V4.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V4.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/menus/juce_BurgerMenuComponent.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/menus/juce_BurgerMenuComponent.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/menus/juce_MenuBarComponent.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/menus/juce_MenuBarComponent.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/menus/juce_MenuBarModel.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/menus/juce_MenuBarModel.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/menus/juce_PopupMenu.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/menus/juce_PopupMenu.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/misc/juce_BubbleComponent.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/misc/juce_BubbleComponent.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/misc/juce_DropShadower.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/misc/juce_DropShadower.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/misc/juce_JUCESplashScreen.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/misc/juce_JUCESplashScreen.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/mouse/juce_ComponentDragger.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/mouse/juce_ComponentDragger.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropContainer.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropContainer.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropTarget.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/mouse/juce_FileDragAndDropTarget.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/mouse/juce_LassoComponent.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/mouse/juce_MouseCursor.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/mouse/juce_MouseCursor.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/mouse/juce_MouseEvent.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/mouse/juce_MouseEvent.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/mouse/juce_MouseInactivityDetector.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/mouse/juce_MouseInactivityDetector.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/mouse/juce_MouseInputSource.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/mouse/juce_MouseInputSource.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/mouse/juce_MouseListener.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/mouse/juce_MouseListener.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/mouse/juce_SelectedItemSet.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/mouse/juce_TextDragAndDropTarget.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/mouse/juce_TooltipClient.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/native/juce_android_ContentSharer.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/native/juce_android_FileChooser.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/native/juce_android_Windowing.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/native/juce_common_MimeTypes.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/native/juce_ios_ContentSharer.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/native/juce_ios_FileChooser.mm"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/native/juce_ios_UIViewComponentPeer.mm"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/native/juce_ios_Windowing.mm"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/native/juce_linux_FileChooser.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/native/juce_linux_X11.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/native/juce_linux_X11.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/native/juce_linux_X11_Clipboard.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/native/juce_linux_X11_Windowing.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/native/juce_mac_FileChooser.mm"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/native/juce_mac_MainMenu.mm"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/native/juce_mac_MouseCursor.mm"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/native/juce_mac_NSViewComponentPeer.mm"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/native/juce_mac_Windowing.mm"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/native/juce_MultiTouchMapper.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/native/juce_win32_DragAndDrop.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/native/juce_win32_FileChooser.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/native/juce_win32_Windowing.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/positioning/juce_MarkerList.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/positioning/juce_MarkerList.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinate.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinate.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinatePositioner.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinatePositioner.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/positioning/juce_RelativeParallelogram.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/positioning/juce_RelativeParallelogram.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/positioning/juce_RelativePoint.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/positioning/juce_RelativePoint.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/positioning/juce_RelativePointPath.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/positioning/juce_RelativePointPath.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/positioning/juce_RelativeRectangle.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/positioning/juce_RelativeRectangle.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/properties/juce_BooleanPropertyComponent.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/properties/juce_BooleanPropertyComponent.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/properties/juce_ButtonPropertyComponent.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/properties/juce_ButtonPropertyComponent.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/properties/juce_ChoicePropertyComponent.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/properties/juce_ChoicePropertyComponent.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/properties/juce_MultiChoicePropertyComponent.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/properties/juce_MultiChoicePropertyComponent.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/properties/juce_PropertyComponent.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/properties/juce_PropertyComponent.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/properties/juce_PropertyPanel.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/properties/juce_PropertyPanel.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/properties/juce_SliderPropertyComponent.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/properties/juce_SliderPropertyComponent.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/properties/juce_TextPropertyComponent.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/properties/juce_TextPropertyComponent.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/widgets/juce_ComboBox.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/widgets/juce_ComboBox.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/widgets/juce_ImageComponent.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/widgets/juce_ImageComponent.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/widgets/juce_Label.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/widgets/juce_Label.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/widgets/juce_ListBox.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/widgets/juce_ListBox.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/widgets/juce_ProgressBar.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/widgets/juce_ProgressBar.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/widgets/juce_Slider.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/widgets/juce_Slider.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/widgets/juce_TableHeaderComponent.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/widgets/juce_TableHeaderComponent.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/widgets/juce_TableListBox.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/widgets/juce_TableListBox.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/widgets/juce_TextEditor.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/widgets/juce_TextEditor.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/widgets/juce_Toolbar.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/widgets/juce_Toolbar.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemComponent.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemComponent.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemFactory.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemPalette.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemPalette.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/widgets/juce_TreeView.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/widgets/juce_TreeView.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/windows/juce_AlertWindow.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/windows/juce_AlertWindow.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/windows/juce_CallOutBox.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/windows/juce_CallOutBox.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/windows/juce_ComponentPeer.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/windows/juce_ComponentPeer.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/windows/juce_DialogWindow.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/windows/juce_DialogWindow.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/windows/juce_DocumentWindow.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/windows/juce_DocumentWindow.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/windows/juce_NativeMessageBox.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/windows/juce_ResizableWindow.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/windows/juce_ResizableWindow.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/windows/juce_ThreadWithProgressWindow.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/windows/juce_ThreadWithProgressWindow.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/windows/juce_TooltipWindow.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/windows/juce_TooltipWindow.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/windows/juce_TopLevelWindow.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/windows/juce_TopLevelWindow.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/juce_gui_basics.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/juce_gui_basics.mm"
    "../../../../../../LIBS/JUCE/modules/juce_gui_basics/juce_gui_basics.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_extra/code_editor/juce_CodeDocument.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_extra/code_editor/juce_CodeDocument.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_extra/code_editor/juce_CodeEditorComponent.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_extra/code_editor/juce_CodeEditorComponent.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_extra/code_editor/juce_CodeTokeniser.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniser.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniser.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniserFunctions.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_extra/code_editor/juce_LuaCodeTokeniser.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_extra/code_editor/juce_LuaCodeTokeniser.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_extra/code_editor/juce_XMLCodeTokeniser.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_extra/code_editor/juce_XMLCodeTokeniser.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_extra/documents/juce_FileBasedDocument.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_extra/documents/juce_FileBasedDocument.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_extra/embedding/juce_ActiveXControlComponent.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_extra/embedding/juce_AndroidViewComponent.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_extra/embedding/juce_NSViewComponent.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_extra/embedding/juce_ScopedDPIAwarenessDisabler.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_extra/embedding/juce_UIViewComponent.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_extra/embedding/juce_XEmbedComponent.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_extra/misc/juce_AnimatedAppComponent.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_extra/misc/juce_AnimatedAppComponent.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_extra/misc/juce_AppleRemote.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_extra/misc/juce_BubbleMessageComponent.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_extra/misc/juce_BubbleMessageComponent.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_extra/misc/juce_ColourSelector.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_extra/misc/juce_ColourSelector.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_extra/misc/juce_KeyMappingEditorComponent.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_extra/misc/juce_KeyMappingEditorComponent.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_extra/misc/juce_LiveConstantEditor.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_extra/misc/juce_LiveConstantEditor.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_extra/misc/juce_PreferencesPanel.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_extra/misc/juce_PreferencesPanel.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_extra/misc/juce_PushNotifications.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_extra/misc/juce_PushNotifications.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_extra/misc/juce_RecentlyOpenedFilesList.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_extra/misc/juce_RecentlyOpenedFilesList.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_extra/misc/juce_SplashScreen.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_extra/misc/juce_SplashScreen.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_extra/misc/juce_SystemTrayIconComponent.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_extra/misc/juce_SystemTrayIconComponent.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_extra/misc/juce_WebBrowserComponent.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_extra/native/juce_android_PushNotifications.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_extra/native/juce_android_WebBrowserComponent.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_extra/native/juce_AndroidViewComponent.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_extra/native/juce_ios_PushNotifications.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_extra/native/juce_ios_UIViewComponent.mm"
    "../../../../../../LIBS/JUCE/modules/juce_gui_extra/native/juce_linux_X11_SystemTrayIcon.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_extra/native/juce_linux_X11_WebBrowserComponent.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_extra/native/juce_linux_XEmbedComponent.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_extra/native/juce_mac_AppleRemote.mm"
    "../../../../../../LIBS/JUCE/modules/juce_gui_extra/native/juce_mac_CarbonViewWrapperComponent.h"
    "../../../../../../LIBS/JUCE/modules/juce_gui_extra/native/juce_mac_NSViewComponent.mm"
    "../../../../../../LIBS/JUCE/modules/juce_gui_extra/native/juce_mac_PushNotifications.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_extra/native/juce_mac_SystemTrayIcon.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_extra/native/juce_mac_WebBrowserComponent.mm"
    "../../../../../../LIBS/JUCE/modules/juce_gui_extra/native/juce_win32_ActiveXComponent.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_extra/native/juce_win32_SystemTrayIcon.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_extra/native/juce_win32_WebBrowserComponent.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_extra/juce_gui_extra.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_gui_extra/juce_gui_extra.mm"
    "../../../../../../LIBS/JUCE/modules/juce_gui_extra/juce_gui_extra.h"
    "../../../../../../LIBS/JUCE/modules/juce_opengl/geometry/juce_Draggable3DOrientation.h"
    "../../../../../../LIBS/JUCE/modules/juce_opengl/geometry/juce_Matrix3D.h"
    "../../../../../../LIBS/JUCE/modules/juce_opengl/geometry/juce_Quaternion.h"
    "../../../../../../LIBS/JUCE/modules/juce_opengl/geometry/juce_Vector3D.h"
    "../../../../../../LIBS/JUCE/modules/juce_opengl/native/juce_MissingGLDefinitions.h"
    "../../../../../../LIBS/JUCE/modules/juce_opengl/native/juce_OpenGL_android.h"
    "../../../../../../LIBS/JUCE/modules/juce_opengl/native/juce_OpenGL_ios.h"
    "../../../../../../LIBS/JUCE/modules/juce_opengl/native/juce_OpenGL_linux_X11.h"
    "../../../../../../LIBS/JUCE/modules/juce_opengl/native/juce_OpenGL_osx.h"
    "../../../../../../LIBS/JUCE/modules/juce_opengl/native/juce_OpenGL_win32.h"
    "../../../../../../LIBS/JUCE/modules/juce_opengl/native/juce_OpenGLExtensions.h"
    "../../../../../../LIBS/JUCE/modules/juce_opengl/opengl/juce_OpenGLContext.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_opengl/opengl/juce_OpenGLContext.h"
    "../../../../../../LIBS/JUCE/modules/juce_opengl/opengl/juce_OpenGLFrameBuffer.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_opengl/opengl/juce_OpenGLFrameBuffer.h"
    "../../../../../../LIBS/JUCE/modules/juce_opengl/opengl/juce_OpenGLGraphicsContext.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_opengl/opengl/juce_OpenGLGraphicsContext.h"
    "../../../../../../LIBS/JUCE/modules/juce_opengl/opengl/juce_OpenGLHelpers.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_opengl/opengl/juce_OpenGLHelpers.h"
    "../../../../../../LIBS/JUCE/modules/juce_opengl/opengl/juce_OpenGLImage.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_opengl/opengl/juce_OpenGLImage.h"
    "../../../../../../LIBS/JUCE/modules/juce_opengl/opengl/juce_OpenGLPixelFormat.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_opengl/opengl/juce_OpenGLPixelFormat.h"
    "../../../../../../LIBS/JUCE/modules/juce_opengl/opengl/juce_OpenGLRenderer.h"
    "../../../../../../LIBS/JUCE/modules/juce_opengl/opengl/juce_OpenGLShaderProgram.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_opengl/opengl/juce_OpenGLShaderProgram.h"
    "../../../../../../LIBS/JUCE/modules/juce_opengl/opengl/juce_OpenGLTexture.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_opengl/opengl/juce_OpenGLTexture.h"
    "../../../../../../LIBS/JUCE/modules/juce_opengl/utils/juce_OpenGLAppComponent.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_opengl/utils/juce_OpenGLAppComponent.h"
    "../../../../../../LIBS/JUCE/modules/juce_opengl/juce_opengl.cpp"
    "../../../../../../LIBS/JUCE/modules/juce_opengl/juce_opengl.mm"
    "../../../../../../LIBS/JUCE/modules/juce_opengl/juce_opengl.h"
    "../../../JuceLibraryCode/AppConfig.h"
    "../../../JuceLibraryCode/BinaryData.cpp"
    "../../../JuceLibraryCode/BinaryData.h"
    "../../../JuceLibraryCode/include_juce_audio_basics.cpp"
    "../../../JuceLibraryCode/include_juce_audio_devices.cpp"
    "../../../JuceLibraryCode/include_juce_audio_formats.cpp"
    "../../../JuceLibraryCode/include_juce_audio_processors.cpp"
    "../../../JuceLibraryCode/include_juce_audio_utils.cpp"
    "../../../JuceLibraryCode/include_juce_core.cpp"
    "../../../JuceLibraryCode/include_juce_cryptography.cpp"
    "../../../JuceLibraryCode/include_juce_data_structures.cpp"
    "../../../JuceLibraryCode/include_juce_events.cpp"
    "../../../JuceLibraryCode/include_juce_graphics.cpp"
    "../../../JuceLibraryCode/include_juce_gui_basics.cpp"
    "../../../JuceLibraryCode/include_juce_gui_extra.cpp"
    "../../../JuceLibraryCode/include_juce_opengl.cpp"
    "../../../JuceLibraryCode/JuceHeader.h"
)

set_source_files_properties("../../../patches/test.pd" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Source/MainComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/audio_play_head/juce_AudioPlayHead.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/buffers/juce_AudioChannelSet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/buffers/juce_AudioChannelSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/buffers/juce_AudioDataConverters.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/buffers/juce_AudioDataConverters.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/buffers/juce_AudioProcessLoadMeasurer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/buffers/juce_AudioProcessLoadMeasurer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/buffers/juce_AudioSampleBuffer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/buffers/juce_FloatVectorOperations.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/buffers/juce_FloatVectorOperations.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/midi/juce_MidiBuffer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/midi/juce_MidiBuffer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/midi/juce_MidiFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/midi/juce_MidiFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/midi/juce_MidiKeyboardState.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/midi/juce_MidiKeyboardState.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/midi/juce_MidiMessage.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/midi/juce_MidiMessage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/midi/juce_MidiMessageSequence.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/midi/juce_MidiMessageSequence.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/midi/juce_MidiRPN.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/midi/juce_MidiRPN.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/mpe/juce_MPEInstrument.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/mpe/juce_MPEInstrument.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/mpe/juce_MPEMessages.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/mpe/juce_MPEMessages.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/mpe/juce_MPENote.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/mpe/juce_MPENote.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserBase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserVoice.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserVoice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/mpe/juce_MPEUtils.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/mpe/juce_MPEUtils.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/mpe/juce_MPEValue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/mpe/juce_MPEValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/mpe/juce_MPEZoneLayout.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/mpe/juce_MPEZoneLayout.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/native/juce_mac_CoreAudioLayouts.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/sources/juce_AudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/sources/juce_BufferingAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/sources/juce_BufferingAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/sources/juce_ChannelRemappingAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/sources/juce_ChannelRemappingAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/sources/juce_IIRFilterAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/sources/juce_IIRFilterAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/sources/juce_MemoryAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/sources/juce_MemoryAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/sources/juce_MixerAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/sources/juce_MixerAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/sources/juce_PositionableAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/sources/juce_ResamplingAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/sources/juce_ResamplingAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/sources/juce_ReverbAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/sources/juce_ReverbAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/sources/juce_ToneGeneratorAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/sources/juce_ToneGeneratorAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/synthesisers/juce_Synthesiser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/synthesisers/juce_Synthesiser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/utilities/juce_ADSR.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/utilities/juce_CatmullRomInterpolator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/utilities/juce_CatmullRomInterpolator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/utilities/juce_Decibels.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/utilities/juce_IIRFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/utilities/juce_IIRFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/utilities/juce_LagrangeInterpolator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/utilities/juce_LagrangeInterpolator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/utilities/juce_Reverb.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/utilities/juce_SmoothedValue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/utilities/juce_SmoothedValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/juce_audio_basics.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/juce_audio_basics.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_basics/juce_audio_basics.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_devices/audio_io/juce_AudioDeviceManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_devices/audio_io/juce_AudioDeviceManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODevice.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODevice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODeviceType.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODeviceType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_devices/audio_io/juce_SystemAudioVolume.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_devices/midi_io/juce_MidiDevices.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_devices/midi_io/juce_MidiDevices.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_devices/midi_io/juce_MidiMessageCollector.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_devices/midi_io/juce_MidiMessageCollector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_devices/native/juce_android_Audio.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_devices/native/juce_android_Midi.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_devices/native/juce_android_Oboe.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_devices/native/juce_android_OpenSL.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_devices/native/juce_ios_Audio.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_devices/native/juce_ios_Audio.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_devices/native/juce_linux_ALSA.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_devices/native/juce_linux_Bela.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_devices/native/juce_linux_JackAudio.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_devices/native/juce_linux_Midi.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_devices/native/juce_mac_CoreAudio.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_devices/native/juce_mac_CoreMidi.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_devices/native/juce_MidiDataConcatenator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_devices/native/juce_win32_ASIO.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_devices/native/juce_win32_DirectSound.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_devices/native/juce_win32_Midi.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_devices/native/juce_win32_WASAPI.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_devices/sources/juce_AudioSourcePlayer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_devices/sources/juce_AudioSourcePlayer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_devices/sources/juce_AudioTransportSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_devices/sources/juce_AudioTransportSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_devices/juce_audio_devices.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_devices/juce_audio_devices.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_devices/juce_audio_devices.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/all.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitmath.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitreader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitwriter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/cpu.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/crc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/fixed.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/float.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/format.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/lpc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/md5.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/memory.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/metadata.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/stream_encoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/stream_encoder_framing.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/window.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/all.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/stream_decoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/stream_encoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitmath.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitreader.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitwriter.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/cpu.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/crc.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/fixed.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/float.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/format.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/lpc_flac.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/md5.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/memory.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_decoder.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_encoder.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_encoder_framing.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/window_flac.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/all.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/alloc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/assert.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/callback.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/compat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/endswap.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/export.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/Flac Licence.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/format.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/metadata.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/ordinals.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/stream_decoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/stream_encoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/flac/win_utf8_io.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/coupled/res_books_51.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/coupled/res_books_stereo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/floor/floor_books.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/uncoupled/res_books_uncoupled.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/floor_all.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_8.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_11.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_16.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_44.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_8.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_16.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44p51.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44u.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_8.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_11.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_16.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_22.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_32.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44p51.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44u.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_X.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/analysis.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/backends.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/bitrate.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/bitrate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/block.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codebook.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codebook.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codec_internal.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/envelope.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/envelope.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/floor0.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/floor1.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/highlevel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/info.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup_data.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lpc.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lpc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lsp.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lsp.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mapping0.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/masking.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mdct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mdct.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/misc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/os.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/psy.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/psy.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/registry.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/registry.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/res0.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/scales.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/sharedbook.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/smallft.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/smallft.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/synthesis.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/vorbisenc.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/vorbisfile.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/window.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/window.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/bitwise.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/codec.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/config_types.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/framing.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/Ogg Vorbis Licence.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/ogg.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/os_types.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/vorbisenc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/oggvorbis/vorbisfile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/juce_AiffAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/juce_AiffAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/juce_CoreAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/juce_CoreAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/juce_FlacAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/juce_FlacAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/juce_LAMEEncoderAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/juce_LAMEEncoderAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/juce_MP3AudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/juce_MP3AudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/juce_OggVorbisAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/juce_OggVorbisAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/juce_WavAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/juce_WavAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/juce_WindowsMediaAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/codecs/juce_WindowsMediaAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/format/juce_AudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/format/juce_AudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/format/juce_AudioFormatManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/format/juce_AudioFormatManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReaderSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReaderSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/format/juce_AudioFormatWriter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/format/juce_AudioFormatWriter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/format/juce_AudioSubsectionReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/format/juce_AudioSubsectionReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/format/juce_BufferingAudioFormatReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/format/juce_BufferingAudioFormatReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/format/juce_MemoryMappedAudioFormatReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/sampler/juce_Sampler.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/sampler/juce_Sampler.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/juce_audio_formats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/juce_audio_formats.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_formats/juce_audio_formats.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormatManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormatManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/baseiids.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/classfactoryhelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fbuffer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fbuffer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fdebug.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fdebug.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fobject.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fobject.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstreamer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstreamer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstring.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstring.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/updatehandler.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/updatehandler.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/thread/include/flock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/thread/source/flock.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/LICENSE.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/README.md" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/conststringtable.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/conststringtable.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/coreiids.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/falignpop.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/falignpush.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/fplatform.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/fstrdefs.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ftypes.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/funknown.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/funknown.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/futils.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/fvariant.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ibstream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/icloneable.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ipersistent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ipluginbase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/istringresult.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/iupdatehandler.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/smartpointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/typesizecheck.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ustring.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ustring.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/gui/iplugview.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/gui/iplugviewcontentscalesupport.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstattributes.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstaudioprocessor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstautomationstate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstchannelcontextinfo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstcomponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstcontextmenu.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivsteditcontroller.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstevents.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivsthostapplication.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstinterappaudio.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstmessage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstmidicontrollers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstmidilearn.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstnoteexpression.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstparameterchanges.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstphysicalui.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstpluginterfacesupport.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstplugview.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstprefetchablesupport.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstprocesscontext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstrepresentation.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivsttestplugprovider.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstunits.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/vstpshpack4.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/vstspeaker.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/vsttypes.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/LICENSE.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/README.md" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/memorystream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/memorystream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/pluginview.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/pluginview.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/hosting/hostclasses.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/hosting/hostclasses.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/hosting/pluginterfacesupport.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/hosting/pluginterfacesupport.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstbus.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstbus.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponentbase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponentbase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vsteditcontroller.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vsteditcontroller.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstinitiids.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstparameters.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstparameters.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstpresetfile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstpresetfile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/LICENSE.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/README.md" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/LICENSE.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/README.md" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/juce_AU_Shared.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/juce_AudioUnitPluginFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/juce_AudioUnitPluginFormat.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/juce_LADSPAPluginFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/juce_LADSPAPluginFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/juce_LegacyAudioParameter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/juce_VST3Common.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/juce_VST3Headers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/juce_VST3PluginFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/juce_VST3PluginFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/juce_VSTCommon.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/juce_VSTMidiEventList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/juce_VSTPluginFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/format_types/juce_VSTPluginFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/processors/juce_AudioPluginInstance.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/processors/juce_AudioPluginInstance.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorGraph.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorGraph.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorParameter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorParameterGroup.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorParameterGroup.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/processors/juce_GenericAudioProcessorEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/processors/juce_GenericAudioProcessorEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/processors/juce_PluginDescription.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/processors/juce_PluginDescription.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/scanning/juce_KnownPluginList.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/scanning/juce_KnownPluginList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/scanning/juce_PluginDirectoryScanner.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/scanning/juce_PluginDirectoryScanner.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/scanning/juce_PluginListComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/scanning/juce_PluginListComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterBool.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterBool.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterChoice.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterChoice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterFloat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterFloat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterInt.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterInt.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorParameterWithID.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorParameterWithID.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorValueTreeState.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorValueTreeState.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/utilities/juce_RangedAudioParameter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/utilities/juce_RangedAudioParameter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/juce_audio_processors.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/juce_audio_processors.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_processors/juce_audio_processors.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_utils/audio_cd/juce_AudioCDBurner.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_utils/audio_cd/juce_AudioCDReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_utils/audio_cd/juce_AudioCDReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_utils/gui/juce_AudioAppComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_utils/gui/juce_AudioAppComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_utils/gui/juce_AudioDeviceSelectorComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_utils/gui/juce_AudioDeviceSelectorComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnail.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnail.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnailBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnailCache.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnailCache.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_utils/gui/juce_AudioVisualiserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_utils/gui/juce_AudioVisualiserComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_utils/gui/juce_BluetoothMidiDevicePairingDialogue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_utils/gui/juce_MidiKeyboardComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_utils/gui/juce_MidiKeyboardComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_utils/native/juce_android_BluetoothMidiDevicePairingDialogue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_utils/native/juce_ios_BluetoothMidiDevicePairingDialogue.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_utils/native/juce_linux_AudioCDReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_utils/native/juce_linux_BluetoothMidiDevicePairingDialogue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_utils/native/juce_mac_AudioCDBurner.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_utils/native/juce_mac_AudioCDReader.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_utils/native/juce_mac_BluetoothMidiDevicePairingDialogue.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_utils/native/juce_win_BluetoothMidiDevicePairingDialogue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_utils/native/juce_win32_AudioCDBurner.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_utils/native/juce_win32_AudioCDReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_utils/players/juce_AudioProcessorPlayer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_utils/players/juce_AudioProcessorPlayer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_utils/players/juce_SoundPlayer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_utils/players/juce_SoundPlayer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_utils/juce_audio_utils.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_utils/juce_audio_utils.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_audio_utils/juce_audio_utils.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/containers/juce_AbstractFifo.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/containers/juce_AbstractFifo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/containers/juce_Array.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/containers/juce_ArrayAllocationBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/containers/juce_ArrayBase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/containers/juce_ArrayBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/containers/juce_DynamicObject.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/containers/juce_DynamicObject.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/containers/juce_ElementComparator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/containers/juce_HashMap.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/containers/juce_HashMap_test.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/containers/juce_LinkedListPointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/containers/juce_ListenerList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/containers/juce_NamedValueSet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/containers/juce_NamedValueSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/containers/juce_OwnedArray.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/containers/juce_OwnedArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/containers/juce_PropertySet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/containers/juce_PropertySet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/containers/juce_ReferenceCountedArray.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/containers/juce_ReferenceCountedArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/containers/juce_ScopedValueSetter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/containers/juce_SortedSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/containers/juce_SparseSet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/containers/juce_SparseSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/containers/juce_Variant.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/containers/juce_Variant.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/files/juce_DirectoryIterator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/files/juce_DirectoryIterator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/files/juce_File.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/files/juce_File.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/files/juce_FileFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/files/juce_FileFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/files/juce_FileInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/files/juce_FileInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/files/juce_FileOutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/files/juce_FileOutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/files/juce_FileSearchPath.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/files/juce_FileSearchPath.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/files/juce_MemoryMappedFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/files/juce_TemporaryFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/files/juce_TemporaryFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/files/juce_WildcardFileFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/files/juce_WildcardFileFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/javascript/juce_Javascript.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/javascript/juce_Javascript.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/javascript/juce_JSON.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/javascript/juce_JSON.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/logging/juce_FileLogger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/logging/juce_FileLogger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/logging/juce_Logger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/logging/juce_Logger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/maths/juce_BigInteger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/maths/juce_BigInteger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/maths/juce_Expression.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/maths/juce_Expression.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/maths/juce_MathsFunctions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/maths/juce_NormalisableRange.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/maths/juce_Random.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/maths/juce_Random.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/maths/juce_Range.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/maths/juce_StatisticsAccumulator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/memory/juce_Atomic.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/memory/juce_ByteOrder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/memory/juce_ContainerDeletePolicy.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/memory/juce_HeapBlock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/memory/juce_HeavyweightLeakedObjectDetector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/memory/juce_LeakedObjectDetector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/memory/juce_Memory.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/memory/juce_MemoryBlock.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/memory/juce_MemoryBlock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/memory/juce_OptionalScopedPointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/memory/juce_ReferenceCountedObject.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/memory/juce_ScopedPointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/memory/juce_SharedResourcePointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/memory/juce_Singleton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/memory/juce_WeakReference.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/misc/juce_ConsoleApplication.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/misc/juce_ConsoleApplication.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/misc/juce_Result.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/misc/juce_Result.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/misc/juce_RuntimePermissions.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/misc/juce_RuntimePermissions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/misc/juce_StdFunctionCompat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/misc/juce_StdFunctionCompat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/misc/juce_Uuid.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/misc/juce_Uuid.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/misc/juce_WindowsRegistry.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/native/java/README.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/native/juce_android_Files.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/native/juce_android_JNIHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/native/juce_android_JNIHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/native/juce_android_Misc.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/native/juce_android_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/native/juce_android_RuntimePermissions.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/native/juce_android_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/native/juce_android_Threads.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/native/juce_BasicNativeHeaders.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/native/juce_curl_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/native/juce_linux_CommonFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/native/juce_linux_Files.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/native/juce_linux_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/native/juce_linux_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/native/juce_linux_Threads.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/native/juce_mac_ClangBugWorkaround.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/native/juce_mac_Files.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/native/juce_mac_Network.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/native/juce_mac_Strings.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/native/juce_mac_SystemStats.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/native/juce_mac_Threads.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/native/juce_osx_ObjCHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/native/juce_posix_IPAddress.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/native/juce_posix_NamedPipe.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/native/juce_posix_SharedCode.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/native/juce_win32_ComSmartPtr.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/native/juce_win32_Files.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/native/juce_win32_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/native/juce_win32_Registry.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/native/juce_win32_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/native/juce_win32_Threads.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/network/juce_IPAddress.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/network/juce_IPAddress.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/network/juce_MACAddress.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/network/juce_MACAddress.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/network/juce_NamedPipe.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/network/juce_NamedPipe.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/network/juce_Socket.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/network/juce_Socket.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/network/juce_URL.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/network/juce_URL.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/network/juce_WebInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/network/juce_WebInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/streams/juce_BufferedInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/streams/juce_BufferedInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/streams/juce_FileInputSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/streams/juce_FileInputSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/streams/juce_InputSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/streams/juce_InputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/streams/juce_InputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/streams/juce_MemoryInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/streams/juce_MemoryInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/streams/juce_MemoryOutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/streams/juce_MemoryOutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/streams/juce_OutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/streams/juce_OutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/streams/juce_SubregionStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/streams/juce_SubregionStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/streams/juce_URLInputSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/streams/juce_URLInputSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/system/juce_CompilerSupport.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/system/juce_PlatformDefs.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/system/juce_StandardHeader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/system/juce_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/system/juce_SystemStats.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/system/juce_TargetPlatform.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/text/juce_Base64.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/text/juce_Base64.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/text/juce_CharacterFunctions.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/text/juce_CharacterFunctions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/text/juce_CharPointer_ASCII.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/text/juce_CharPointer_UTF8.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/text/juce_CharPointer_UTF16.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/text/juce_CharPointer_UTF32.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/text/juce_Identifier.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/text/juce_Identifier.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/text/juce_LocalisedStrings.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/text/juce_LocalisedStrings.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/text/juce_NewLine.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/text/juce_String.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/text/juce_String.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/text/juce_StringArray.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/text/juce_StringArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/text/juce_StringPairArray.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/text/juce_StringPairArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/text/juce_StringPool.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/text/juce_StringPool.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/text/juce_StringRef.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/text/juce_TextDiff.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/text/juce_TextDiff.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/threads/juce_ChildProcess.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/threads/juce_ChildProcess.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/threads/juce_CriticalSection.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/threads/juce_DynamicLibrary.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/threads/juce_HighResolutionTimer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/threads/juce_HighResolutionTimer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/threads/juce_InterProcessLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/threads/juce_Process.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/threads/juce_ReadWriteLock.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/threads/juce_ReadWriteLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/threads/juce_ScopedLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/threads/juce_ScopedReadLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/threads/juce_ScopedWriteLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/threads/juce_SpinLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/threads/juce_Thread.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/threads/juce_Thread.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/threads/juce_ThreadLocalValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/threads/juce_ThreadPool.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/threads/juce_ThreadPool.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/threads/juce_TimeSliceThread.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/threads/juce_TimeSliceThread.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/threads/juce_WaitableEvent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/time/juce_PerformanceCounter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/time/juce_PerformanceCounter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/time/juce_RelativeTime.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/time/juce_RelativeTime.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/time/juce_Time.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/time/juce_Time.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/unit_tests/juce_UnitTest.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/unit_tests/juce_UnitTest.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/unit_tests/juce_UnitTestCategories.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/xml/juce_XmlDocument.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/xml/juce_XmlDocument.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/xml/juce_XmlElement.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/xml/juce_XmlElement.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/zip/zlib/adler32.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/zip/zlib/compress.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/zip/zlib/crc32.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/zip/zlib/crc32.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/zip/zlib/deflate.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/zip/zlib/deflate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/zip/zlib/infback.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/zip/zlib/inffast.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/zip/zlib/inffast.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/zip/zlib/inffixed.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/zip/zlib/inflate.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/zip/zlib/inflate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/zip/zlib/inftrees.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/zip/zlib/inftrees.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/zip/zlib/trees.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/zip/zlib/trees.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/zip/zlib/uncompr.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/zip/zlib/zconf.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/zip/zlib/zconf.in.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/zip/zlib/zlib.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/zip/zlib/zutil.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/zip/zlib/zutil.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/zip/juce_GZIPCompressorOutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/zip/juce_GZIPCompressorOutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/zip/juce_GZIPDecompressorInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/zip/juce_GZIPDecompressorInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/zip/juce_ZipFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/zip/juce_ZipFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/juce_core.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/juce_core.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_core/juce_core.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_cryptography/encryption/juce_BlowFish.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_cryptography/encryption/juce_BlowFish.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_cryptography/encryption/juce_Primes.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_cryptography/encryption/juce_Primes.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_cryptography/encryption/juce_RSAKey.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_cryptography/encryption/juce_RSAKey.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_cryptography/hashing/juce_MD5.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_cryptography/hashing/juce_MD5.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_cryptography/hashing/juce_SHA256.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_cryptography/hashing/juce_SHA256.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_cryptography/hashing/juce_Whirlpool.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_cryptography/hashing/juce_Whirlpool.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_cryptography/juce_cryptography.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_cryptography/juce_cryptography.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_cryptography/juce_cryptography.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_data_structures/app_properties/juce_ApplicationProperties.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_data_structures/app_properties/juce_ApplicationProperties.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_data_structures/app_properties/juce_PropertiesFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_data_structures/app_properties/juce_PropertiesFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_data_structures/undomanager/juce_UndoableAction.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_data_structures/undomanager/juce_UndoManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_data_structures/undomanager/juce_UndoManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_data_structures/values/juce_CachedValue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_data_structures/values/juce_CachedValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_data_structures/values/juce_Value.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_data_structures/values/juce_Value.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_data_structures/values/juce_ValueTree.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_data_structures/values/juce_ValueTree.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_data_structures/values/juce_ValueWithDefault.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_data_structures/values/juce_ValueWithDefault.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_data_structures/juce_data_structures.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_data_structures/juce_data_structures.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_data_structures/juce_data_structures.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_events/broadcasters/juce_ActionBroadcaster.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_events/broadcasters/juce_ActionBroadcaster.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_events/broadcasters/juce_ActionListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_events/broadcasters/juce_AsyncUpdater.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_events/broadcasters/juce_AsyncUpdater.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_events/broadcasters/juce_ChangeBroadcaster.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_events/broadcasters/juce_ChangeBroadcaster.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_events/broadcasters/juce_ChangeListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_events/interprocess/juce_ConnectedChildProcess.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_events/interprocess/juce_ConnectedChildProcess.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_events/interprocess/juce_InterprocessConnection.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_events/interprocess/juce_InterprocessConnection.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_events/interprocess/juce_InterprocessConnectionServer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_events/interprocess/juce_InterprocessConnectionServer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_events/interprocess/juce_NetworkServiceDiscovery.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_events/interprocess/juce_NetworkServiceDiscovery.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_events/messages/juce_ApplicationBase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_events/messages/juce_ApplicationBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_events/messages/juce_CallbackMessage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_events/messages/juce_DeletedAtShutdown.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_events/messages/juce_DeletedAtShutdown.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_events/messages/juce_Initialisation.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_events/messages/juce_Message.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_events/messages/juce_MessageListener.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_events/messages/juce_MessageListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_events/messages/juce_MessageManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_events/messages/juce_MessageManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_events/messages/juce_MountedVolumeListChangeDetector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_events/messages/juce_NotificationType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_events/native/juce_android_Messaging.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_events/native/juce_ios_MessageManager.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_events/native/juce_linux_EventLoop.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_events/native/juce_linux_Messaging.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_events/native/juce_mac_MessageManager.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_events/native/juce_osx_MessageQueue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_events/native/juce_win32_HiddenMessageWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_events/native/juce_win32_Messaging.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_events/native/juce_win32_WinRTWrapper.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_events/native/juce_win32_WinRTWrapper.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_events/timers/juce_MultiTimer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_events/timers/juce_MultiTimer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_events/timers/juce_Timer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_events/timers/juce_Timer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_events/juce_events.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_events/juce_events.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_events/juce_events.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/colour/juce_Colour.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/colour/juce_Colour.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/colour/juce_ColourGradient.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/colour/juce_ColourGradient.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/colour/juce_Colours.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/colour/juce_Colours.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/colour/juce_FillType.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/colour/juce_FillType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/colour/juce_PixelFormats.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/contexts/juce_GraphicsContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/contexts/juce_GraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsPostScriptRenderer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsPostScriptRenderer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsSoftwareRenderer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsSoftwareRenderer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/effects/juce_DropShadowEffect.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/effects/juce_DropShadowEffect.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/effects/juce_GlowEffect.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/effects/juce_GlowEffect.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/effects/juce_ImageEffectFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/fonts/juce_AttributedString.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/fonts/juce_AttributedString.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/fonts/juce_CustomTypeface.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/fonts/juce_CustomTypeface.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/fonts/juce_Font.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/fonts/juce_Font.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/fonts/juce_GlyphArrangement.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/fonts/juce_GlyphArrangement.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/fonts/juce_TextLayout.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/fonts/juce_TextLayout.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/fonts/juce_Typeface.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/fonts/juce_Typeface.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/geometry/juce_AffineTransform.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/geometry/juce_AffineTransform.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/geometry/juce_BorderSize.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/geometry/juce_EdgeTable.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/geometry/juce_EdgeTable.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/geometry/juce_Line.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/geometry/juce_Parallelogram.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/geometry/juce_Path.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/geometry/juce_Path.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/geometry/juce_PathIterator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/geometry/juce_PathIterator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/geometry/juce_PathStrokeType.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/geometry/juce_PathStrokeType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/geometry/juce_Point.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/geometry/juce_Rectangle.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/geometry/juce_RectangleList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/cderror.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/changes to libjpeg for JUCE.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jcapimin.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jcapistd.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jccoefct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jccolor.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jcdctmgr.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jchuff.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jchuff.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jcinit.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jcmainct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jcmarker.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jcmaster.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jcomapi.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jconfig.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jcparam.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jcphuff.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jcprepct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jcsample.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jctrans.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jdapimin.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jdapistd.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jdatasrc.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jdcoefct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jdcolor.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jdct.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jddctmgr.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jdhuff.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jdhuff.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jdinput.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jdmainct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jdmarker.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jdmaster.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jdmerge.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jdphuff.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jdpostct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jdsample.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jdtrans.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jerror.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jerror.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctflt.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctfst.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctint.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jidctflt.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jidctfst.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jidctint.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jidctred.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jinclude.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jmemmgr.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jmemnobs.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jmemsys.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jmorecfg.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jpegint.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jpeglib.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jquant1.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jquant2.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jutils.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/jversion.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/transupp.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/jpglib/transupp.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/pnglib/libpng_readme.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/pnglib/png.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/pnglib/png.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/pnglib/pngconf.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/pnglib/pngdebug.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/pnglib/pngerror.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/pnglib/pngget.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/pnglib/pnginfo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/pnglib/pngmem.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/pnglib/pngpread.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/pnglib/pngpriv.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/pnglib/pngread.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/pnglib/pngrio.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/pnglib/pngrtran.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/pnglib/pngrutil.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/pnglib/pngset.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/pnglib/pngstruct.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/pnglib/pngtrans.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/pnglib/pngwio.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/pnglib/pngwrite.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/pnglib/pngwtran.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/pnglib/pngwutil.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/juce_GIFLoader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/juce_JPEGLoader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/image_formats/juce_PNGLoader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/images/juce_Image.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/images/juce_Image.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/images/juce_ImageCache.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/images/juce_ImageCache.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/images/juce_ImageConvolutionKernel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/images/juce_ImageConvolutionKernel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/images/juce_ImageFileFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/images/juce_ImageFileFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/native/juce_android_Fonts.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/native/juce_android_GraphicsContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/native/juce_android_IconHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/native/juce_freetype_Fonts.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/native/juce_linux_Fonts.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/native/juce_linux_IconHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsContext.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/native/juce_mac_Fonts.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/native/juce_mac_IconHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/native/juce_RenderingHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/native/juce_win32_Direct2DGraphicsContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/native/juce_win32_Direct2DGraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/native/juce_win32_DirectWriteTypeface.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/native/juce_win32_DirectWriteTypeLayout.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/native/juce_win32_Fonts.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/native/juce_win32_IconHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/placement/juce_Justification.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/placement/juce_RectanglePlacement.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/placement/juce_RectanglePlacement.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/juce_graphics.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/juce_graphics.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_graphics/juce_graphics.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/application/juce_Application.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/application/juce_Application.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/buttons/juce_ArrowButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/buttons/juce_ArrowButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/buttons/juce_Button.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/buttons/juce_Button.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/buttons/juce_DrawableButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/buttons/juce_DrawableButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/buttons/juce_HyperlinkButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/buttons/juce_HyperlinkButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/buttons/juce_ImageButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/buttons/juce_ImageButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/buttons/juce_ShapeButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/buttons/juce_ShapeButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/buttons/juce_TextButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/buttons/juce_TextButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/buttons/juce_ToggleButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/buttons/juce_ToggleButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/buttons/juce_ToolbarButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/buttons/juce_ToolbarButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandID.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandInfo.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandInfo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandTarget.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/commands/juce_KeyPressMappingSet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/commands/juce_KeyPressMappingSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/components/juce_CachedComponentImage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/components/juce_Component.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/components/juce_Component.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/components/juce_ComponentListener.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/components/juce_ComponentListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/components/juce_ModalComponentManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/components/juce_ModalComponentManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/desktop/juce_Desktop.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/desktop/juce_Desktop.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/desktop/juce_Displays.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/desktop/juce_Displays.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/drawables/juce_Drawable.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/drawables/juce_Drawable.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/drawables/juce_DrawableComposite.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/drawables/juce_DrawableComposite.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/drawables/juce_DrawableImage.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/drawables/juce_DrawableImage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/drawables/juce_DrawablePath.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/drawables/juce_DrawablePath.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/drawables/juce_DrawableRectangle.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/drawables/juce_DrawableRectangle.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/drawables/juce_DrawableShape.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/drawables/juce_DrawableShape.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/drawables/juce_DrawableText.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/drawables/juce_DrawableText.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/drawables/juce_SVGParser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/filebrowser/juce_ContentSharer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/filebrowser/juce_ContentSharer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsDisplayComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsDisplayComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsList.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooserDialogBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooserDialogBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/filebrowser/juce_FileListComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/filebrowser/juce_FileListComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/filebrowser/juce_FilenameComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/filebrowser/juce_FilenameComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/filebrowser/juce_FilePreviewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/filebrowser/juce_FileSearchPathListComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/filebrowser/juce_FileSearchPathListComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/filebrowser/juce_FileTreeComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/filebrowser/juce_FileTreeComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/filebrowser/juce_ImagePreviewComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/filebrowser/juce_ImagePreviewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/keyboard/juce_CaretComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/keyboard/juce_CaretComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/keyboard/juce_KeyboardFocusTraverser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/keyboard/juce_KeyboardFocusTraverser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/keyboard/juce_KeyListener.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/keyboard/juce_KeyListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/keyboard/juce_KeyPress.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/keyboard/juce_KeyPress.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/keyboard/juce_ModifierKeys.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/keyboard/juce_ModifierKeys.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/keyboard/juce_SystemClipboard.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/keyboard/juce_TextEditorKeyMapper.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/keyboard/juce_TextInputTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_AnimatedPosition.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_AnimatedPositionBehaviours.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_ComponentAnimator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_ComponentAnimator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_ComponentBoundsConstrainer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_ComponentBoundsConstrainer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_ComponentBuilder.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_ComponentBuilder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_ComponentMovementWatcher.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_ComponentMovementWatcher.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_ConcertinaPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_ConcertinaPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_FlexBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_FlexBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_FlexItem.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_Grid.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_Grid.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_GridItem.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_GridItem.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_GroupComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_GroupComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_MultiDocumentPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_MultiDocumentPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_ResizableBorderComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_ResizableBorderComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_ResizableCornerComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_ResizableCornerComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_ResizableEdgeComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_ResizableEdgeComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_ScrollBar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_ScrollBar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_SidePanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_SidePanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutResizerBar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutResizerBar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_StretchableObjectResizer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_StretchableObjectResizer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_TabbedButtonBar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_TabbedButtonBar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_TabbedComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_TabbedComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_Viewport.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/layout/juce_Viewport.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V1.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V1.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V2.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V2.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V3.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V3.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V4.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V4.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/menus/juce_BurgerMenuComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/menus/juce_BurgerMenuComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/menus/juce_MenuBarComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/menus/juce_MenuBarComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/menus/juce_MenuBarModel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/menus/juce_MenuBarModel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/menus/juce_PopupMenu.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/menus/juce_PopupMenu.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/misc/juce_BubbleComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/misc/juce_BubbleComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/misc/juce_DropShadower.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/misc/juce_DropShadower.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/misc/juce_JUCESplashScreen.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/misc/juce_JUCESplashScreen.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/mouse/juce_ComponentDragger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/mouse/juce_ComponentDragger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropContainer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropContainer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/mouse/juce_FileDragAndDropTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/mouse/juce_LassoComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/mouse/juce_MouseCursor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/mouse/juce_MouseCursor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/mouse/juce_MouseEvent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/mouse/juce_MouseEvent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/mouse/juce_MouseInactivityDetector.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/mouse/juce_MouseInactivityDetector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/mouse/juce_MouseInputSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/mouse/juce_MouseInputSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/mouse/juce_MouseListener.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/mouse/juce_MouseListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/mouse/juce_SelectedItemSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/mouse/juce_TextDragAndDropTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/mouse/juce_TooltipClient.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/native/juce_android_ContentSharer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/native/juce_android_FileChooser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/native/juce_android_Windowing.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/native/juce_common_MimeTypes.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/native/juce_ios_ContentSharer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/native/juce_ios_FileChooser.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/native/juce_ios_UIViewComponentPeer.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/native/juce_ios_Windowing.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/native/juce_linux_FileChooser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/native/juce_linux_X11.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/native/juce_linux_X11.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/native/juce_linux_X11_Clipboard.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/native/juce_linux_X11_Windowing.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/native/juce_mac_FileChooser.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/native/juce_mac_MainMenu.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/native/juce_mac_MouseCursor.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/native/juce_mac_NSViewComponentPeer.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/native/juce_mac_Windowing.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/native/juce_MultiTouchMapper.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/native/juce_win32_DragAndDrop.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/native/juce_win32_FileChooser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/native/juce_win32_Windowing.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/positioning/juce_MarkerList.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/positioning/juce_MarkerList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinate.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinatePositioner.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinatePositioner.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/positioning/juce_RelativeParallelogram.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/positioning/juce_RelativeParallelogram.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/positioning/juce_RelativePoint.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/positioning/juce_RelativePoint.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/positioning/juce_RelativePointPath.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/positioning/juce_RelativePointPath.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/positioning/juce_RelativeRectangle.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/positioning/juce_RelativeRectangle.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/properties/juce_BooleanPropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/properties/juce_BooleanPropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/properties/juce_ButtonPropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/properties/juce_ButtonPropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/properties/juce_ChoicePropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/properties/juce_ChoicePropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/properties/juce_MultiChoicePropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/properties/juce_MultiChoicePropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/properties/juce_PropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/properties/juce_PropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/properties/juce_PropertyPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/properties/juce_PropertyPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/properties/juce_SliderPropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/properties/juce_SliderPropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/properties/juce_TextPropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/properties/juce_TextPropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/widgets/juce_ComboBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/widgets/juce_ComboBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/widgets/juce_ImageComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/widgets/juce_ImageComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/widgets/juce_Label.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/widgets/juce_Label.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/widgets/juce_ListBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/widgets/juce_ListBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/widgets/juce_ProgressBar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/widgets/juce_ProgressBar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/widgets/juce_Slider.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/widgets/juce_Slider.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/widgets/juce_TableHeaderComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/widgets/juce_TableHeaderComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/widgets/juce_TableListBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/widgets/juce_TableListBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/widgets/juce_TextEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/widgets/juce_TextEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/widgets/juce_Toolbar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/widgets/juce_Toolbar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemFactory.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemPalette.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemPalette.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/widgets/juce_TreeView.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/widgets/juce_TreeView.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/windows/juce_AlertWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/windows/juce_AlertWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/windows/juce_CallOutBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/windows/juce_CallOutBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/windows/juce_ComponentPeer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/windows/juce_ComponentPeer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/windows/juce_DialogWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/windows/juce_DialogWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/windows/juce_DocumentWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/windows/juce_DocumentWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/windows/juce_NativeMessageBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/windows/juce_ResizableWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/windows/juce_ResizableWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/windows/juce_ThreadWithProgressWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/windows/juce_ThreadWithProgressWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/windows/juce_TooltipWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/windows/juce_TooltipWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/windows/juce_TopLevelWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/windows/juce_TopLevelWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/juce_gui_basics.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/juce_gui_basics.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_basics/juce_gui_basics.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_extra/code_editor/juce_CodeDocument.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_extra/code_editor/juce_CodeDocument.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_extra/code_editor/juce_CodeEditorComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_extra/code_editor/juce_CodeEditorComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_extra/code_editor/juce_CodeTokeniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniserFunctions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_extra/code_editor/juce_LuaCodeTokeniser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_extra/code_editor/juce_LuaCodeTokeniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_extra/code_editor/juce_XMLCodeTokeniser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_extra/code_editor/juce_XMLCodeTokeniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_extra/documents/juce_FileBasedDocument.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_extra/documents/juce_FileBasedDocument.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_extra/embedding/juce_ActiveXControlComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_extra/embedding/juce_AndroidViewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_extra/embedding/juce_NSViewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_extra/embedding/juce_ScopedDPIAwarenessDisabler.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_extra/embedding/juce_UIViewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_extra/embedding/juce_XEmbedComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_extra/misc/juce_AnimatedAppComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_extra/misc/juce_AnimatedAppComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_extra/misc/juce_AppleRemote.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_extra/misc/juce_BubbleMessageComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_extra/misc/juce_BubbleMessageComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_extra/misc/juce_ColourSelector.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_extra/misc/juce_ColourSelector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_extra/misc/juce_KeyMappingEditorComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_extra/misc/juce_KeyMappingEditorComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_extra/misc/juce_LiveConstantEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_extra/misc/juce_LiveConstantEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_extra/misc/juce_PreferencesPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_extra/misc/juce_PreferencesPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_extra/misc/juce_PushNotifications.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_extra/misc/juce_PushNotifications.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_extra/misc/juce_RecentlyOpenedFilesList.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_extra/misc/juce_RecentlyOpenedFilesList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_extra/misc/juce_SplashScreen.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_extra/misc/juce_SplashScreen.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_extra/misc/juce_SystemTrayIconComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_extra/misc/juce_SystemTrayIconComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_extra/misc/juce_WebBrowserComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_extra/native/juce_android_PushNotifications.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_extra/native/juce_android_WebBrowserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_extra/native/juce_AndroidViewComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_extra/native/juce_ios_PushNotifications.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_extra/native/juce_ios_UIViewComponent.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_extra/native/juce_linux_X11_SystemTrayIcon.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_extra/native/juce_linux_X11_WebBrowserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_extra/native/juce_linux_XEmbedComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_extra/native/juce_mac_AppleRemote.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_extra/native/juce_mac_CarbonViewWrapperComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_extra/native/juce_mac_NSViewComponent.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_extra/native/juce_mac_PushNotifications.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_extra/native/juce_mac_SystemTrayIcon.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_extra/native/juce_mac_WebBrowserComponent.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_extra/native/juce_win32_ActiveXComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_extra/native/juce_win32_SystemTrayIcon.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_extra/native/juce_win32_WebBrowserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_extra/juce_gui_extra.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_extra/juce_gui_extra.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_gui_extra/juce_gui_extra.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_opengl/geometry/juce_Draggable3DOrientation.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_opengl/geometry/juce_Matrix3D.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_opengl/geometry/juce_Quaternion.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_opengl/geometry/juce_Vector3D.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_opengl/native/juce_MissingGLDefinitions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_opengl/native/juce_OpenGL_android.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_opengl/native/juce_OpenGL_ios.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_opengl/native/juce_OpenGL_linux_X11.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_opengl/native/juce_OpenGL_osx.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_opengl/native/juce_OpenGL_win32.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_opengl/native/juce_OpenGLExtensions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_opengl/opengl/juce_OpenGLContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_opengl/opengl/juce_OpenGLContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_opengl/opengl/juce_OpenGLFrameBuffer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_opengl/opengl/juce_OpenGLFrameBuffer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_opengl/opengl/juce_OpenGLGraphicsContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_opengl/opengl/juce_OpenGLGraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_opengl/opengl/juce_OpenGLHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_opengl/opengl/juce_OpenGLHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_opengl/opengl/juce_OpenGLImage.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_opengl/opengl/juce_OpenGLImage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_opengl/opengl/juce_OpenGLPixelFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_opengl/opengl/juce_OpenGLPixelFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_opengl/opengl/juce_OpenGLRenderer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_opengl/opengl/juce_OpenGLShaderProgram.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_opengl/opengl/juce_OpenGLShaderProgram.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_opengl/opengl/juce_OpenGLTexture.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_opengl/opengl/juce_OpenGLTexture.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_opengl/utils/juce_OpenGLAppComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_opengl/utils/juce_OpenGLAppComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_opengl/juce_opengl.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_opengl/juce_opengl.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../LIBS/JUCE/modules/juce_opengl/juce_opengl.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../JuceLibraryCode/AppConfig.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../JuceLibraryCode/BinaryData.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../JuceLibraryCode/JuceHeader.h" PROPERTIES HEADER_FILE_ONLY TRUE)

find_library(log "log")
find_library(android "android")
find_library(glesv2 "GLESv2")
find_library(egl "EGL")

target_link_libraries( ${BINARY_NAME}

    ${log}
    ${android}
    ${glesv2}
    ${egl}
    "cpufeatures"
    libpd
)
