#include "LocomotionComponent2.h"

ULocomotionComponent2::ULocomotionComponent2(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bOrientRotationToMovement = true;
    this->CustomGravityScale = 1.00f;
    this->CustomGravityFallScale = 1.00f;
    this->mCeilingHeightCheckAboveHeadDistance = 135.00f;
    this->mCeilingCastRadiusMultiplier = 0.85f;
    this->mDisableCalcVelocityOverride = false;
    this->mDisablePhysWalkingOverride = false;
    this->mNavFilter = NULL;
    this->mAlwaysAcceptRootMotion = true;
    this->mStayUpright = true;
    this->mEnableRotationInAir = false;
    this->mEnableSmoothTurning = false;
    this->mEnableWallKnowledge = false;
    this->mEnableWalkStart = false;
    this->mEnableWalkStop = false;
    this->mEnableTurnOnSpot = false;
    this->mEnableQuickTurn = false;
    this->mEnableAbuseStumble = false;
    this->mEnableRootMotionFixup = true;
    this->mEnableQuickTurnSprintFeedVelocity = true;
    this->mDoCollisionChecksWhenStandingStill = false;
    this->mQuickTurnMaxTurnSpeed = 300.00f;
    this->mSprintQuickTurnFixupVelocity = 350.00f;
    this->mCrouchSprintQuickTurnFixupVelocity = 150.00f;
    this->mWalkStopMinSpeed = 100.00f;
    this->mWalkStopProportionalMinSpeed = 0.75f;
    this->mWalkStartMaxTimeSinceStationary = 0.10f;
    this->mWalkStartMinInputThreshold = 0.50f;
    this->mWalkStartCooldownTime = 0.00f;
    this->mNumWalkStartsForStumble = 3;
    this->mTimeLimitForWalkStumble = 0.70f;
    this->mStandStillThreshold = 0.10f;
    this->mPostLandTurnLockoutTime = 0.25f;
    this->mPostLandTurnLockoutAngle = 100.00f;
    this->mSprintLeanFactorStrength = 0.50f;
    this->mPullAwayFromAlignedJumpAtAngle = 100.00f;
    this->mWalkStumbleCooldown = 0.50f;
    this->mMinSpeed2DInAir = 80.00f;
    this->mPureBrakingAngle = 50.00f;
    this->mForceCharacterRepulsion = false;
    this->DitchMaxAngle = 20.00f;
    this->DitchMaxTime = 0.15f;
    this->DitchTeleportRecoveryTime = 0.15f;
    this->mSidewaysFallingVelocityLimit = 600.00f;
    this->mUpwardsFallingVelocityLimit = 550.00f;
    this->mInputHistoryRange = 0.00f;
    this->mTimeNeededWithoutInput = 0.00f;
    this->mTimeNeededForDirectionChange = 0.00f;
    this->mOverrideIdleAnimationWhenLookAt = false;
    this->mOverrideStandIdleLookAtAnimation = NULL;
    this->mCapsuleComponent = NULL;
    this->mFlowControlComponent = NULL;
    this->mAllowWalkOffLedges = true;
    this->mIsPureBraking = false;
    this->mForcedSpeed = false;
    this->mForceWalkStartRatioOverride = false;
    this->mMovementControllerHelper = NULL;
    this->mSkeletalMesh = NULL;
}

void ULocomotionComponent2::TV_Exit_Hack() {
}

bool ULocomotionComponent2::SetFallLimits(EFallType inFallType, float inValue) {
    return false;
}

void ULocomotionComponent2::SetDesiredFacingDirection(const FVector& Direction, bool snap) {
}

void ULocomotionComponent2::SetCustomMovementBase(UPrimitiveComponent* newBase, const FName BoneName) {
}

void ULocomotionComponent2::ResetFallStartLocation() {
}

void ULocomotionComponent2::OnAnimNotify(const FFlowControlAnimNotifyData& AnimNotify) {
}

bool ULocomotionComponent2::IsSprinting() const {
    return false;
}

float ULocomotionComponent2::GetSprintRatio() const {
    return 0.0f;
}

void ULocomotionComponent2::EnableInput() {
}

void ULocomotionComponent2::DisableInputForAFrame() {
}

void ULocomotionComponent2::DisableInput() {
}


