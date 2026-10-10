#include "ItemAnalyzer.h"

UItemAnalyzer::UItemAnalyzer() {
    this->mCheckForPath = false;
    this->mMaxItemDistance = 2000.00f;
    this->mMaxProximityScore = 0.00f;
    this->mPriorityScoreMultiplier = 10.00f;
    this->mPlayerPickupInterface = NULL;
}


