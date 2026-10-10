#include "ReactToNewDetectionPattern.h"
#include "EPatternPriority.h"

UReactToNewDetectionPattern::UReactToNewDetectionPattern() {
    this->mPriority = EPatternPriority::Reaction;
    this->mInterrupter = true;
    this->mMaxTimeSinceDetection = 1.00f;
    this->mAlertState = EAIAlertState::Idle;
    this->mReactionAnim = EAIReactionAnimationState::None;
    this->mMaxReactionDuration = 5.00f;
    this->mNavigationOptions = NULL;
}


