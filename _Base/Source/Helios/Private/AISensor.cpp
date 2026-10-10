#include "AISensor.h"

UAISensor::UAISensor() {
    this->mTimeToDetection = 0.20f;
    this->mCanIdentify = false;
    this->mEnabled = true;
    this->mStimulusSource = EStimulusSource::None;
    this->mOwner = NULL;
}

void UAISensor::SetEnabled(bool Enabled) {
}


