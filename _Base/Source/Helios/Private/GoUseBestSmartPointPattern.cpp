#include "GoUseBestSmartPointPattern.h"
#include "EAIPatternEventDrivenEvaluation.h"

UGoUseBestSmartPointPattern::UGoUseBestSmartPointPattern() {
    this->mEventDrivenEvaluation = EAIPatternEventDrivenEvaluation::WhileValueIsValidOrTrue;
    this->mTypeOfPoints = ESmartPointType::Generic;
    this->mLookAtPoint = false;
    this->mCheckForMoveTarget = true;
    this->mCanTriggerIfAlerted = true;
    this->mAbortIfSPChanged = false;
    this->mSmartPoint = NULL;
}


