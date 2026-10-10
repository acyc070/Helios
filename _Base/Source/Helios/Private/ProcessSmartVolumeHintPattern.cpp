#include "ProcessSmartVolumeHintPattern.h"
#include "EAIPatternEventDrivenEvaluation.h"
#include "EPatternPriority.h"

UProcessSmartVolumeHintPattern::UProcessSmartVolumeHintPattern() {
    this->mPriority = EPatternPriority::Order;
    this->mInterrupter = true;
    this->mEventDrivenEvaluation = EAIPatternEventDrivenEvaluation::WhileValueIsValidOrTrue;
}


