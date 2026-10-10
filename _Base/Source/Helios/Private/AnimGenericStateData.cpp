#include "AnimGenericStateData.h"

FAnimGenericStateData::FAnimGenericStateData() {
    this->mActive = false;
    this->mRequested = false;
    this->mInProgress = false;
    this->mLoop = false;
    this->mUpperBodyOnly = false;
    this->mAdditive = false;
    this->mBlendInTime = 0.00f;
    this->mBlendOutTime = 0.00f;
    this->mPlayRate = 0.00f;
}

