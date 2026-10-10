#include "AIBaseModularBrain.h"
#include "Templates/SubclassOf.h"

UAIBaseModularBrain::UAIBaseModularBrain(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mPathfinder = NULL;
    this->mNavigator = NULL;
    this->mBodyAnimator = NULL;
    this->mLookinator = NULL;
    this->mResetChalkboardOnForget = false;
    this->mAIChalkboard = NULL;
    this->mPublicPawnChalkboard = NULL;
    this->mPawnSelf = NULL;
    this->mPawnController = NULL;
    this->mPerceptionAnalyzer = NULL;
}

UChalkboardWrapper* UAIBaseModularBrain::GetPublicPawnChalkboard() {
    return NULL;
}

UChalkboardWrapper* UAIBaseModularBrain::GetChalkboard() {
    return NULL;
}

UAIAnalyzer* UAIBaseModularBrain::GetAnalyzerByClass(TSubclassOf<UAIAnalyzer> AnalyzerClass) const {
    return NULL;
}


