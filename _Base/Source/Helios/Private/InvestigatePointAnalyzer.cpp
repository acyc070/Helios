#include "InvestigatePointAnalyzer.h"
#include "ESmartPointType.h"

UInvestigatePointAnalyzer::UInvestigatePointAnalyzer() {
    this->mActive = false;
    this->mType = ESmartPointType::Search;
    this->mMaxDistanceToInvestigateLocation = 500.00f;
}


