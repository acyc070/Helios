#include "PickupComponent.h"

UPickupComponent::UPickupComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mEnabledForAI = true;
    this->mItemTags = 0;
    this->mItemPriority = 0;
    this->mPickupAnimations = NULL;
    this->mCustomPickupAnimation = NULL;
    this->mPlayCustomPickupAnimationOnlyOnce = false;
    this->mPickupAnimationForPointB = NULL;
    this->mCrouchedPickupAnimationForPointB = NULL;
    this->mPickupOverrideComplexAnimation = NULL;
    this->mEquippableItemAbilitySetOverride = NULL;
    this->mEquippedAbilitySetOverride = NULL;
    this->mInventorySlot = EEquipSlots::None;
    this->mPermanentStoredItem = false;
    this->mAllowDropOnStumble = true;
    this->mForceRotationToForwardVector = true;
    this->mUpdateRotation = true;
    this->mRequiresConstantInput = true;
    this->mCanThrow = true;
    this->mCanPutdown = true;
    this->mShouldPutDownOnAnimationOverride = true;
    this->mShouldPutDownOnCurrentTransform = false;
    this->mSlotEjectSpeed = 20.00f;
    this->mSlotEjectDistance = 50.00f;
    this->mOriginalShouldUseSoftAttachment = false;
    this->mLeftHandEffector = false;
    this->mRightHandEffector = false;
    this->mAllowFastPickupRelease = true;
    this->mDeferredCollisionDelay = 0.05f;
    this->mAttachedPickupDelay = 0.00f;
    this->mPickupHoldStyle = EPickupHoldStyle::Light;
    this->mShouldHavePickUpPointA = false;
    this->mShouldHavePickUpPointB = false;
    this->mDistanceAdditionAfterTransition = 0.00f;
    this->mRotationAxisToIgnore = ERotationAxis::Roll;
    this->mShouldChangeCollisionSettingsOnTransition = true;
    this->mShouldLerpTowardsHands = true;
    this->mAutoDropFallType = EFallType::Medium;
    this->mPickupType = TEXT("Generic");
    this->mSlotAttached = NULL;
    this->mCharacterIKComponent = NULL;
}

bool UPickupComponent::TryThrow() {
    return false;
}

bool UPickupComponent::TryPutdown() {
    return false;
}

bool UPickupComponent::TryPickUp(AControlledPawn* Holder) {
    return false;
}

void UPickupComponent::SoftAttachItem(AActor* Instigator) {
}

void UPickupComponent::SetPickUpPointTransform(EPickUpPointType pointType, const FTransform& NewTransform) {
}

void UPickupComponent::SetPickupAnimationSet(UCharacterAnimationSlots* animationSlot) {
}

void UPickupComponent::SetOriginalCollisionProfile() {
}

void UPickupComponent::SetEnabled(bool IsEnabled) {
}

bool UPickupComponent::IsStoredItem() const {
    return false;
}

bool UPickupComponent::IsInActiveState() const {
    return false;
}

bool UPickupComponent::IsCurrentlyHeld() const {
    return false;
}

bool UPickupComponent::IsAttachedToSlotBP() const {
    return false;
}

bool UPickupComponent::IsAnEquipItem() const {
    return false;
}

bool UPickupComponent::HasCustomPickupAnimation() const {
    return false;
}

AActor* UPickupComponent::GetSlot() const {
    return NULL;
}

FVector UPickupComponent::GetPickUpTargetDirection(const FVector& holderLocation) const {
    return FVector{};
}

FVector UPickupComponent::GetPickUpPointLocation(AActor* Holder) const {
    return FVector{};
}

FName UPickupComponent::GetItemName() const {
    return NAME_None;
}

AControlledPawn* UPickupComponent::GetHolderIfHeld() const {
    return NULL;
}

AControlledPawn* UPickupComponent::GetHolder() const {
    return NULL;
}

FRotator UPickupComponent::GetGrabSocketRotation() const {
    return FRotator{};
}

bool UPickupComponent::ForceDrop(bool isThrown) {
    return false;
}

void UPickupComponent::DetachFromSlotBP(bool eject) {
}

bool UPickupComponent::CanFastPickupRelease() const {
    return false;
}

bool UPickupComponent::CanBeDroppedOnStumble() const {
    return false;
}

void UPickupComponent::AttachItemWithoutKeepingPhysicality(AActor* Instigator, AActor* Target, int32 AttackIndex, EAttackType AttackType) {
}

void UPickupComponent::AttachCarryableToSlot(UPuzzleSlotReceiverComponent* slotReceiver, bool canBeRemovedByPlayer, bool instant) {
}


