#include "HuntTargetPattern.h"
#include "EPatternPriority.h"

UHuntTargetPattern::UHuntTargetPattern() {
    this->mPriority = EPatternPriority::Alert;
    this->mPredictionTime = 0.50f;
    this->mStartHuntDistance = 700.00f;
    this->mTooCloseDistance = 200.00f;
    this->mTarget = NULL;
    this->mMovePattern = NULL;
}


