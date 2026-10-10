#include "AnimHeliosOverridePlayData.h"

FAnimHeliosOverridePlayData::FAnimHeliosOverridePlayData() {
    this->mPreviousTimeAccumulator = 0.00f;
    this->mInternalTimeAccumulator = 0.00f;
    this->mIsLooping = false;
}

