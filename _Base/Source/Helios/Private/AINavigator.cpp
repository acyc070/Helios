#include "AINavigator.h"

UAINavigator::UAINavigator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mDefaultNavigationOptions = NULL;
    this->mInitialNavigationOptions = NULL;
    this->mDefaultGoalRadius = 20.00f;
    this->mPathLookAheadDistance = 50.00f;
    this->DirectLineMaxLength = 1000.00f;
    this->mEndMovementFixedTransition = true;
    this->mUseAtlasTransition = false;
    this->MinRepathInterval = 1.00f;
    this->DirectLineMaxElevation = 200.00f;
    this->mNavPolyExperiment = false;
    this->mNavPolyDistance = 200.00f;
    this->mNavPolyDrawOffset = 15.00f;
    this->mSteeringArrowsLength = 20.00f;
    this->NavChalkboard = NULL;
    this->mBrain = NULL;
    this->mPawnSelf = NULL;
    this->mPathfinder = NULL;
    this->mAnimator = NULL;
    this->mLocomotionComponent = NULL;
    this->mFlowControlComponent = NULL;
    this->mCurrentNavlink = NULL;
    this->mCachedNextNavlink = NULL;
}

void UAINavigator::TeleportTo(const FVector& Location) {
}

void UAINavigator::StopOverDistance(float Distance) {
}

void UAINavigator::Stop(bool forceStop) {
}

void UAINavigator::SetNavigationOptions_Blueprint(UAINavigationOptionsData* navigationOptions, FLocomotionState LocomotionState) {
}

void UAINavigator::ResetNavigationOptions() {
}

void UAINavigator::ResetDesiredMoveSpeedOverride() {
}

void UAINavigator::ResetDefaultNavigationOptions() {
}

void UAINavigator::OverrideDesiredMoveSpeed(float desiredSpeed) {
}

void UAINavigator::OverrideDesiredMoveRate(float desiredRate01) {
}

void UAINavigator::MoveInDirection(FVector Direction) {
}

bool UAINavigator::IsTraversingNavlink() const {
    return false;
}

EAINavigationStrategy UAINavigator::GetNavStrategy() const {
    return EAINavigationStrategy::None;
}

float UAINavigator::GetMaxSpeed() const {
    return 0.0f;
}

void UAINavigator::Follow(const AActor* actorToFollow, const FMoveFailedDelegate& OnFollowFailed, FVector followOffset, float followExtrapolationTime, bool Strafe) {
}

void UAINavigator::Flee(const AActor* actorToFlee) {
}

void UAINavigator::FacePoint(const FVector& pointToFace) {
}

void UAINavigator::Face(const FVector& facingDirection) {
}

void UAINavigator::ChangeDefaultNavigationOptions(UAINavigationOptionsData* navigationOptions, FLocomotionState LocomotionState) {
}

void UAINavigator::BlueprintMoveTo(const FVector& Destination, const FVector& endDirection) {
}

void UAINavigator::ArriveBeforeActor(const AActor* OtherActor) {
}

void UAINavigator::AdjustFollowExtrapolationTime(float extrapolationTime) {
}

void UAINavigator::AdjustFollow(FVector followOffset) {
}


