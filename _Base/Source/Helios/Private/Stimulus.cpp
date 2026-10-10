#include "Stimulus.h"

FStimulus::FStimulus() {
    this->mDetectionTime = 0.00f;
    this->mStimulusSource = EStimulusSource::None;
    this->mNoiseStrength = ENoiseStrength::Silent;
    this->mStimulusTags = 0;
}

