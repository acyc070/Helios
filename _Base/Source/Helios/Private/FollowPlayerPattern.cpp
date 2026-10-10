#include "FollowPlayerPattern.h"

UFollowPlayerPattern::UFollowPlayerPattern() {
    this->MoveDirectlyTowards = false;
    this->DirectMovementArrivalDistance = 50.00f;
    this->HardOffset = false;
    this->mFloorPredictionTime = 0.75f;
    this->mFloorEvaluateDistance = 75.00f;
    this->mMaxSimulationIterations = 8;
    this->followExtrapolationTime = 0.00f;
    this->AdjustExtrapolationTimeWhenSprinting = false;
    this->FollowExtrapolationTimeWhenSprinting = -0.20f;
    this->MinPlayerSpeed = 1.00f;
    this->MaxPlayerInactiveTime = 2.00f;
    this->MinIdleTime = 3.00f;
    this->MimicSneak = false;
    this->MimicSprint = true;
    this->AllowedFailTime = 2.00f;
    this->UseCatchupWeight = true;
    this->CatchupWeight = 0.20f;
    this->FollowPlayerTerminationOptions = 2147483647;
    this->navigationOptions = NULL;
    this->mPredictPlayerJumpLocation = true;
    this->mPlayerJumpTimeThreshold = 0.50f;
    this->mPlayerJumpPredictionTime = 1.00f;
    this->mDebugDrawPlayerJumpPrediction = false;
    this->mPlayerPawn = NULL;
}

void UFollowPlayerPattern::OnMoveFailed(float failTime, int32 failCount) {
}


