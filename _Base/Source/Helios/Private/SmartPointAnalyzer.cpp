#include "SmartPointAnalyzer.h"

USmartPointAnalyzer::USmartPointAnalyzer() {
    this->mType = ESmartPointType::Generic;
    this->mIgnorePreviousPointFilter = false;
    this->mUseCustomEvaluationFunction = false;
    this->AIChalkboard = NULL;
    this->Navigator = NULL;
    this->Pawn = NULL;
    this->mNextSmartPoint = NULL;
    this->mOwnerClass = NULL;
}

float USmartPointAnalyzer::EvaluateSmartPoint_Implementation(USmartPoint* SmartPoint) {
    return 0.0f;
}

float USmartPointAnalyzer::CalculateTimeWeight(USmartPoint* Point) const {
    return 0.0f;
}

float USmartPointAnalyzer::CalculateDirectionWeight(USmartPoint* Point, const FVector& WanderDirection) const {
    return 0.0f;
}


