#include "MovementAnalysisSettings.h"

FMovementAnalysisSettings::FMovementAnalysisSettings() {
    this->mEnabled = false;
    this->mRepathWhenAnomalyDetected = false;
    this->mVelocityDiscrepancy_MaxAngle = 0.00f;
    this->mVelocityDiscrepancy_MaxTime = 0.00f;
    this->mDistanceFromPath_MaxDist = 0.00f;
    this->mDistanceFromPath_MaxTime = 0.00f;
    this->mNoProgressOnPath_MaxTime = 0.00f;
}

