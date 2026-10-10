#include "HunterReactToPlayerDeathPattern.h"
#include "EAIPatternEventDrivenEvaluation.h"
#include "EPatternPriority.h"

UHunterReactToPlayerDeathPattern::UHunterReactToPlayerDeathPattern() {
    this->mPriority = EPatternPriority::Override;
    this->mInterrupter = true;
    this->mEventDrivenEvaluation = EAIPatternEventDrivenEvaluation::WhenValueChanges;
    this->mAimAndShootPlaypal = false;
    this->mReloadAnimation = NULL;
    this->mAimDelay = 1.00f;
    this->mAimTimeBeforeShooting = 2.50f;
}


