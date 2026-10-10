#include "AnimHeliosBlendspaceOverridePlayData.h"

FAnimHeliosBlendspaceOverridePlayData::FAnimHeliosBlendspaceOverridePlayData() {
    this->mPreviousTimeAccumulator = 0.00f;
    this->mInternalTimeAccumulator = 0.00f;
    this->mIsLooping = false;
}

