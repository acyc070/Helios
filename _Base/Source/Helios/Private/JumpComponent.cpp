#include "JumpComponent.h"

UJumpComponent::UJumpComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mInterpolateThresholds = false;
    this->mIgnoreLowCeilingCheck = false;
    this->mJumpSettings.AddDefaulted(1);
    this->mCoyoteTime = 0.00f;
    this->mSpeedLag = 0.30f;
    this->mJumpCooldown = 0.35f;
    this->mJumpPrepareDelay = -1.00f;
    this->mCancelJumpVelocityPenalty = NULL;
    this->mJumpMinHeight = 0.00f;
    this->mMinCeilingHeightToJump = 120.00f;
    this->mJumpBufferTime = 0.20f;
    this->mJumpBunnyHopWindowTime = 0.10f;
    this->mJumpBunnyHopLimit = 3;
    this->mBunnyHopStumbleDuration = 1.20f;
    this->mHasJustLandedDuration = 0.30f;
    this->mAllowJumpAlignment = true;
    this->mJumpAlignmentAngle = 60.00f;
    this->mJumpAlignmentWidth = 150.00f;
    this->mJumpAlignmentMinProjectileDistance = 120.00f;
    this->mJumpAlignmentDistanceMultiplier = 1.20f;
    this->mPreciseJumpAlignmentDistanceMultiplier = 1.75f;
    this->mJumpAlignmentHeightMultiplier = 1.00f;
    this->mJumpAlignmentHeightOffsetModifier = 0.00f;
    this->mJumpAlignmentMaxSurfaceAngle = 60.00f;
    this->mJumpAlignmentOffset = 15.00f;
    this->mJumpBackwardsMaxAlignmentOffset = 70.00f;
    this->mFlowControlComponent = NULL;
    this->mLocomotionComponent = NULL;
}

void UJumpComponent::OnJumpApex() {
}

void UJumpComponent::ForcefullyEndJump() {
}


