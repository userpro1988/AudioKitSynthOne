//
//  AKS1Parameter.h
//  AudioKit
//
//  Created by AudioKit Contributors on 12/24/17.
//  Copyright © 2017 AudioKit. All rights reserved.
//

#import "AudioKit/AKInterop.h"

#pragma once

typedef AK_ENUM(AKS1Parameter) {
    index1 = 0,
    index2 = 1,
    morphBalance = 2,
    morph1SemitoneOffset = 3,
    morph2SemitoneOffset = 4,
    morph1Volume = 5,
    morph2Volume = 6,
    subVolume = 7,
    subOctaveDown = 8,
    subIsSquare = 9,
    fmVolume = 10,
    fmAmount = 11,
    noiseVolume = 12,
    lfo1Index = 13,
    lfo1Amplitude = 14,
    lfo1Rate = 15, // hz
    cutoff = 16,
    resonance = 17,
    filterMix = 18, // unused...hard coded to 1
    filterADSRMix = 19,
    isMono = 20,
    glide = 21,
    filterAttackDuration = 22,
    filterDecayDuration = 23,
    filterSustainLevel = 24,
    filterReleaseDuration = 25,
    attackDuration = 26,
    decayDuration = 27,
    sustainLevel = 28,
    releaseDuration = 29,
    morph2Detuning = 30,
    detuningMultiplier = 31,
    masterVolume = 32,
    bitCrushDepth = 33,//bitCrushDepth is unused
    bitCrushSampleRate = 34,
    autoPanAmount = 35,
    autoPanFrequency = 36,
    reverbOn = 37,
    reverbFeedback = 38,
    reverbHighPass = 39,
    reverbMix = 40,
    delayOn = 41,
    delayFeedback = 42,
    delayTime = 43,
    delayMix = 44,
    lfo2Index = 45,
    lfo2Amplitude = 46,
    lfo2Rate = 47, // hz
    cutoffLFO = 48,
    resonanceLFO = 49,
    oscMixLFO = 50,
    reverbMixLFO = 51,
    decayLFO = 52,
    noiseLFO = 53,
    fmLFO = 54,
    detuneLFO = 55,
    filterEnvLFO = 56,
    pitchLFO = 57,
    bitcrushLFO = 58,
    tremoloLFO = 59,
    arpDirection = 60,
    arpInterval = 61,
    arpIsOn = 62,
    arpOctave = 63,
    arpRate = 64, // rate in bpm, not hz
    arpIsSequencer = 65,
    arpTotalSteps = 66,
    arpSeqPattern00 = 67,
    arpSeqPattern01 = 68,
    arpSeqPattern02 = 69,
    arpSeqPattern03 = 70,
    arpSeqPattern04 = 71,
    arpSeqPattern05 = 72,
    arpSeqPattern06 = 73,
    arpSeqPattern07 = 74,
    arpSeqPattern08 = 75,
    arpSeqPattern09 = 76,
    arpSeqPattern10 = 77,
    arpSeqPattern11 = 78,
    arpSeqPattern12 = 79,
    arpSeqPattern13 = 80,
    arpSeqPattern14 = 81,
    arpSeqPattern15 = 82,
    arpSeqOctBoost00 = 83,
    arpSeqOctBoost01 = 84,
    arpSeqOctBoost02 = 85,
    arpSeqOctBoost03 = 86,
    arpSeqOctBoost04 = 87,
    arpSeqOctBoost05 = 88,
    arpSeqOctBoost06 = 89,
    arpSeqOctBoost07 = 90,
    arpSeqOctBoost08 = 91,
    arpSeqOctBoost09 = 92,
    arpSeqOctBoost10 = 93,
    arpSeqOctBoost11 = 94,
    arpSeqOctBoost12 = 95,
    arpSeqOctBoost13 = 96,
    arpSeqOctBoost14 = 97,
    arpSeqOctBoost15 = 98,
    arpSeqNoteOn00 = 99,
    arpSeqNoteOn01 = 100,
    arpSeqNoteOn02 = 101,
    arpSeqNoteOn03 = 102,
    arpSeqNoteOn04 = 103,
    arpSeqNoteOn05 = 104,
    arpSeqNoteOn06 = 105,
    arpSeqNoteOn07 = 106,
    arpSeqNoteOn08 = 107,
    arpSeqNoteOn09 = 108,
    arpSeqNoteOn10 = 109,
    arpSeqNoteOn11 = 110,
    arpSeqNoteOn12 = 111,
    arpSeqNoteOn13 = 112,
    arpSeqNoteOn14 = 113,
    arpSeqNoteOn15 = 114,
    filterType = 115,
    phaserMix = 116,
    phaserRate = 117,
    phaserFeedback = 118,
    phaserNotchWidth = 119,
    monoIsLegato = 120, // range [0 = legato, 1 = portamento (default)]
    widen = 121,
    compressorMasterRatio = 122,
    compressorReverbInputRatio = 123,
    compressorReverbWetRatio = 124,
    compressorMasterThreshold = 125,
    compressorReverbInputThreshold = 126,
    compressorReverbWetThreshold = 127,
    compressorMasterAttack = 128,
    compressorReverbInputAttack = 129,
    compressorReverbWetAttack = 130,
    compressorMasterRelease = 131,
    compressorReverbInputRelease = 132,
    compressorReverbWetRelease = 133,
    compressorMasterMakeupGain = 134,
    compressorReverbInputMakeupGain = 135,
    compressorReverbWetMakeupGain = 136,
    delayInputCutoffTrackingRatio = 137,
    delayInputResonance = 138,
    tempoSyncToArpRate = 139,
    pitchbend = 140,
    pitchbendMinSemitones = 141,
    pitchbendMaxSemitones = 142,
    frequencyA4 = 143,
    portamentoHalfTime = 144,
    
    AKS1ParameterCount = 145
} AKS1Parameter;
