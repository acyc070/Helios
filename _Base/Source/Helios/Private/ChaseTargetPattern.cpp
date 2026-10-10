#include "ChaseTargetPattern.h"
#include "EPatternPriority.h"

UChaseTargetPattern::UChaseTargetPattern() {
    this->mPriority = EPatternPriority::Alert;
    this->mPredictionTime = 0.50f;
    this->mLocomotionMode = TEXT("Hostile");
    this->mNavigationOptions = NULL;
    this->mMaxDistancePrediction = 100.00f;
    this->mTimeToRepath = 0.10f;
    this->mChasePathfindAllowedFailTime = 3.00f;
    this->mLookAtTarget = true;
    this->bPlayCantReachTargetAnimation = false;
    this->mCantReachAnimMaxDuration = 1.00f;
    this->mRandomChaseOffset = 0.00f;
    this->mRandomChaseOffsetAngle = 180.00f;
    this->mCantReachPattern = NULL;
    this->mUseCanGrabEvaluation = false;
    this->mGoalRadius = -1.00f;
    this->mTarget = NULL;
    this->mMovePattern = NULL;
    this->mLookAction = NULL;
    this->mCantReachTargetAction = NULL;
}


