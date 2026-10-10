#include "HunterTerminatorPattern.h"
#include "EPatternPriority.h"

UHunterTerminatorPattern::UHunterTerminatorPattern() {
    this->mPriority = EPatternPriority::Override;
    this->mMinDuration = 0.50f;
    this->mAimTime = 1.00f;
    this->mChaseRadius = 700.00f;
    this->mCloseKillRadius = 300.00f;
    this->mChaseTimeout = 5.00f;
    this->mChaseCooldown = 2.00f;
    this->mPathfindingGoalRadius = 200.00f;
    this->mAllowedFailTime = 2.00f;
    this->mObstructedViewCorrectionPrecision = 15;
}

void UHunterTerminatorPattern::OnShotReached(FHitResult currentHit, FHitResult initialHit) {
}

void UHunterTerminatorPattern::OnMoveFailed(float failTime, int32 failCount) {
}


