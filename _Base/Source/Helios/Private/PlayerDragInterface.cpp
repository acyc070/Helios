#include "PlayerDragInterface.h"
#include "EAbilitySetGrab.h"

UPlayerDragInterface::UPlayerDragInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mGrabType = EAbilitySetGrab::GrabDrag;
    this->mPushPullForce = 2000.00f;
    this->mPushPullRotationForce = 200.00f;
    this->mCanPassivelyPush = 3;
    this->mPassivePushReach = 50.00f;
    this->mPassivePushAngle = 45.00f;
    this->mPassivePushAngleHysterisis = 15.00f;
    this->mPassivePushLocomotionThreshold = 0.01f;
    this->mPlacementOffset = 20.00f;
    this->mMinTransitionSpeed = 75.00f;
    this->mMaxDistanceToGrabHelper = 15.00f;
    this->mFollowGrabHelperSpeed = 100.00f;
    this->mMaxPushAwayTime = 2.00f;
    this->mAutoReleaseAtPitch = 30.00f;
    this->mGrabbedGrabHelper = NULL;
    this->mIsAdjustingPosition = false;
    this->mIsStuckBetweenWallAndDraggable = false;
    this->mForceEndTimeStamp = 0.00f;
    this->mCachedCapsuleHeight = 0.00f;
    this->mInitialDragGrabSpeed = 0.00f;
}

void UPlayerDragInterface::OnReachedGrabPosition() {
}

void UPlayerDragInterface::OnCancelledTransition() {
}

void UPlayerDragInterface::OnAnimationOverrideStarted(UAnimationControlComponent* animControlComp, UAnimationAsset* AnimAsset) {
}

void UPlayerDragInterface::NotifyGrabComplete(const FFlowControlAnimNotifyData& AnimNotify) {
}

void UPlayerDragInterface::IKSecondHand() {
}

void UPlayerDragInterface::IKFirstHand() {
}


