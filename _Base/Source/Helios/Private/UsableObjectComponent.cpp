#include "UsableObjectComponent.h"

UUsableObjectComponent::UUsableObjectComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mCategoriesToTarget = 0;
    this->mAimingConeAngleDegrees = 30.00f;
    this->mAimingConeAngleBoost = 5.00f;
    this->mSelectionDistance = 600.00f;
    this->mMainTargetStickinessBoost = 2.50f;
    this->mOnlyUpdateWhenHeld = true;
    this->mOnlyUpdateAfterPickedUp = false;
    this->mSwitchSearchOwnerWhenNotHeld = false;
    this->mUseInputToAim = false;
    this->mOverlapReceivers = true;
    this->mTargetUpdateRate = 0.10f;
    this->mShouldAutoStowOnInteract = false;
    this->mMainTarget = NULL;
    this->mSearchInputOwner = NULL;
}

void UUsableObjectComponent::SetOverlapReceivers(bool shouldOverlap) {
}

UTargetComponent* UUsableObjectComponent::GetMainTarget() const {
    return NULL;
}

bool UUsableObjectComponent::CallEventOnObject(FName eventToCall, bool onlyMainTarget, bool ThisIsATestVariable) {
    return false;
}


