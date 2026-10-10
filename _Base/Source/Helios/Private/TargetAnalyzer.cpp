#include "TargetAnalyzer.h"

UTargetAnalyzer::UTargetAnalyzer() {
    this->mTargetableTypes = 0;
    this->mTargetablePawns = -1;
    this->mCharacteristicsFilter = 1;
    this->mTimeToForgetDetection = 10.00f;
    this->mIgnoreMultipleAttack = false;
    this->mDrawDebug = true;
    this->mTargetMultipleAttackAnalyzer = NULL;
    this->mPathComponent = NULL;
}

void UTargetAnalyzer::OnObjectLost(FSharedDetectedObject DetectedObject) {
}

void UTargetAnalyzer::OnObjectIdentified(FSharedDetectedObject DetectedObject) {
}

void UTargetAnalyzer::OnObjectDetected(FSharedDetectedObject DetectedObject) {
}


