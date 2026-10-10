#include "ReactToPlayerDeathPattern.h"
#include "EAIPatternEventDrivenEvaluation.h"
#include "EPatternPriority.h"

UReactToPlayerDeathPattern::UReactToPlayerDeathPattern() {
    this->mPriority = EPatternPriority::Override;
    this->mInterrupter = true;
    this->mEventDrivenEvaluation = EAIPatternEventDrivenEvaluation::WhenValueChanges;
    this->mNavigationOptions = NULL;
    this->mPlayerPawn = NULL;
}


