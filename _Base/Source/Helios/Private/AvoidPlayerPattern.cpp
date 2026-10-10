#include "AvoidPlayerPattern.h"

UAvoidPlayerPattern::UAvoidPlayerPattern() {
    this->mName = TEXT("Avoid Player Pattern");
    this->mInterrupter = true;
    this->mAvoidanceRadius = 75.00f;
    this->mPlayerPredictionTime = 0.30f;
    this->mAvoidanceRecalculationInterval = 0.50f;
    this->mMinDurationBeforeRecalculation = 0.50f;
    this->mMinTimeOutsideRadiusBeforeTermination = 0.30f;
    this->mMaxCalculationIterations = 6;
}


