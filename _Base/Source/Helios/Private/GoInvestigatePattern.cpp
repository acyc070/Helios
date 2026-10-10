#include "GoInvestigatePattern.h"
#include "EPatternPriority.h"

UGoInvestigatePattern::UGoInvestigatePattern() {
    this->mPriority = EPatternPriority::Alert;
    this->mAIAlertState = EAIAlertState::Idle;
    this->mSmartPointType = ESmartPointType::Generic;
    this->mNavOptions = NULL;
    this->mInvestigateGoalRadius = -1.00f;
    this->mPatrolAfterInvestigation = false;
    this->mPatrolPatternClass = NULL;
    this->mInvestigateLocationPattern = NULL;
    this->mInvestigateSmartPointPattern = NULL;
    this->mPatrolPattern = NULL;
}


