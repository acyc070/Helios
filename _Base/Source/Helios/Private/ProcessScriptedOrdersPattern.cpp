#include "ProcessScriptedOrdersPattern.h"
#include "EAIPatternEventDrivenEvaluation.h"
#include "EPatternPriority.h"

UProcessScriptedOrdersPattern::UProcessScriptedOrdersPattern() {
    this->mPriority = EPatternPriority::Order;
    this->mInterrupter = true;
    this->mEventDrivenEvaluation = EAIPatternEventDrivenEvaluation::WhileValueIsValidOrTrue;
    this->mExtraWaitTime = 0.50f;
    this->mOrderBeingProcessed = NULL;
}


