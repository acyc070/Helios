#include "PendingAnimationOverrideData.h"

FPendingAnimationOverrideData::FPendingAnimationOverrideData() {
    this->mIsLooping = false;
    this->mStopConditionMask = 0;
    this->mIsSet = false;
    this->mBlendInTime = 0.00f;
    this->mBlendOutTime = 0.00f;
}

