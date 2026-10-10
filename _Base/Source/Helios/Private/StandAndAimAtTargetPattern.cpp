#include "StandAndAimAtTargetPattern.h"
#include "EAIPatternEventDrivenEvaluation.h"
#include "EPatternPriority.h"

UStandAndAimAtTargetPattern::UStandAndAimAtTargetPattern() {
    this->mPriority = EPatternPriority::Reaction;
    this->mInterrupter = true;
    this->mEventDrivenEvaluation = EAIPatternEventDrivenEvaluation::WhileValueIsValidOrTrue;
    this->mMinAimDuration = 0.50f;
    this->mMaxRotationAngle = 90.00f;
    this->mLostLOFDuration = 0.50f;
}


