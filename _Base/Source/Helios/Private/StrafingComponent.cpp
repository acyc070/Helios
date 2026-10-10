#include "StrafingComponent.h"

UStrafingComponent::UStrafingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mInputDeadZone = 0.50f;
    this->mStandingStillMaxYaw = 30.00f;
    this->mAbilitySetOverride = NULL;
    this->mAnimationSlots = NULL;
    this->mAnimationOverrideComponent = NULL;
    this->mFlowControlComponent = NULL;
    this->mIsStrafing = false;
}

void UStrafingComponent::OnWeaponAnimNotify(const FFlowControlAnimNotifyData& AnimNotify) {
}


