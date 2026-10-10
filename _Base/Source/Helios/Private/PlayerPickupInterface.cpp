#include "PlayerPickupInterface.h"
#include "EAbilitySetGrab.h"

UPlayerPickupInterface::UPlayerPickupInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mGrabType = EAbilitySetGrab::GrabItemFromGround;
    this->mCurrentEquipmentItemSlot = EEquipSlots::None;
    this->mEquipmentItemSlotForcedStow = EEquipSlots::None;
    this->mStoredItemAutoStowed = false;
    this->mUsablePickupHasTarget = false;
    this->mPickupRange = 100.00f;
    this->mMaxFacingPickupAngle = 45.00f;
    this->mPickupMaxSpeed = 50.00f;
    this->mCanRegrabOnPutdown = false;
    this->mThrowEncroachmentCheckOffsetForward = 50.00f;
    this->mThrowEncroachmentCheckOffsetUp = 60.00f;
    this->mCombatAlignmentTargetSearchDistance = 300.00f;
    this->mCombatAlignmentTargetSearchAngle = 40.00f;
    this->mLedgeMinHeightAutoStow = 60.00f;
    this->mPutUsableInPocketDelay = 0.30f;
    this->mTakeUsableOutDelay = 1.00f;
    this->mInventoryComponent = NULL;
    this->mInternalPickup = NULL;
    this->mInternalQueuedPickup = NULL;
}

bool UPlayerPickupInterface::ToggleEquipItem(const EEquipSlots Item) {
    return false;
}

bool UPlayerPickupInterface::PutDownItemImmediately(bool onDeath) {
    return false;
}

void UPlayerPickupInterface::OnThrowAnimNotify(const FFlowControlAnimNotifyData& AnimNotify) {
}

void UPlayerPickupInterface::OnPickupPutdownNotify(const FFlowControlAnimNotifyData& AnimNotify) {
}

void UPlayerPickupInterface::OnPawnDeathEvent(const FGenericGameEvent& gameEvent) {
}

void UPlayerPickupInterface::OnAnimationOverrideStarted(UAnimationControlComponent* animControlComp, UAnimationAsset* AnimAsset) {
}

UPickupComponent* UPlayerPickupInterface::GetCurrentlyHeldPickup() const {
    return NULL;
}

AActor* UPlayerPickupInterface::GetCurrentCarryable() const {
    return NULL;
}

void UPlayerPickupInterface::ForceStowOrDrop() {
}


