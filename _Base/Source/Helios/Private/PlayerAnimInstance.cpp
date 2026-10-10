#include "PlayerAnimInstance.h"

UPlayerAnimInstance::UPlayerAnimInstance() {
    this->mUpdateWalkCycleRatio = true;
    this->mCurrentInventoryItemData = EPlayerInventoryItemData::None;
    this->mRemoteInUse = false;
    this->mLedgeClimbBlockedAnimLockInTimeStand = 1.00f;
    this->mLedgeClimbBlockedAnimLockInTimeHang = 1.25f;
    this->mClimbMinAnimSpeed = 0.50f;
    this->mClimbGlobalAnimMultiplier = 1.00f;
    this->ClimbFallFastVelocityThreshold = 100.00f;
    this->mClimbSlowsAnimWithIKStretch = false;
    this->FallWallImpact = false;
    this->GroundWallImpact = false;
    this->mWallHitBelowWaist = false;
    this->mOverrideStandIdleLookAtAnimation = NULL;
}

bool UPlayerAnimInstance::ShouldWalkOrIdle() const {
    return false;
}

bool UPlayerAnimInstance::ShouldStrafeStandTurn() const {
    return false;
}

bool UPlayerAnimInstance::ShouldIdle() const {
    return false;
}

bool UPlayerAnimInstance::ShouldExitWalk() const {
    return false;
}

void UPlayerAnimInstance::OnPlayerAnimNotify(AActor* notifier, const FName& NotifyName, const TArray<UAnimMetaData*>& AnimMetaData) {
}

void UPlayerAnimInstance::OnLanded(AControlledPawn* Pawn, const FFallData& FallData) {
}

void UPlayerAnimInstance::OnJumpStart(const FVector& jumpVec) {
}

void UPlayerAnimInstance::OnBounceOffWall(const FVector& bounceVector, bool belowWaist) {
}

void UPlayerAnimInstance::OnAnimationOverrideStarted(UAnimationControlComponent* animComp, UAnimationAsset* AnimAsset) {
}

bool UPlayerAnimInstance::IsQuickturnAllowed() const {
    return false;
}

bool UPlayerAnimInstance::IsInWalkingMovementMode() const {
    return false;
}


