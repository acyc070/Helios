#include "LookAtSpecificTypePattern.h"
#include "EAIPatternEventDrivenEvaluation.h"

ULookAtSpecificTypePattern::ULookAtSpecificTypePattern() {
    this->mEventDrivenEvaluation = EAIPatternEventDrivenEvaluation::WhileValueIsValidOrTrue;
    this->mType = ELookAtType::Interesting;
    this->mVisionSocketName = TEXT("vision_socket");
    this->mEnableDynamicFOVAngle = false;
    this->mFOVAngle = 100.00f;
    this->mUseOverrideAnimation = false;
    this->mOverrideStandIdleAnimation = NULL;
}

ULookAtPoint* ULookAtSpecificTypePattern::GetBestLookAtPoint() const {
    return NULL;
}


