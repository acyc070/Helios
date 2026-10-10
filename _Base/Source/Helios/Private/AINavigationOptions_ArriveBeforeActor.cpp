#include "AINavigationOptions_ArriveBeforeActor.h"

FAINavigationOptions_ArriveBeforeActor::FAINavigationOptions_ArriveBeforeActor() {
    this->mEnabled = false;
    this->mPawnSelector = EPawnType::Unspecified;
    this->mIdealDistanceAheadOfActor = 0.00f;
    this->mCatchupBlendingDistance = 0.00f;
    this->mAheadBlendingDistance = 0.00f;
    this->mCachedOtherActor = NULL;
}

