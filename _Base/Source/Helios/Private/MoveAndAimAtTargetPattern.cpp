#include "MoveAndAimAtTargetPattern.h"
#include "EPatternPriority.h"

UMoveAndAimAtTargetPattern::UMoveAndAimAtTargetPattern() {
    this->mPriority = EPatternPriority::Reaction;
    this->mInterrupter = true;
    this->mMinAimDuration = 0.50f;
    this->mChaseGoalRadius = 0.00f;
    this->mLostLOFDuration = 0.50f;
}


