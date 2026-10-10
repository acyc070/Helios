#include "BalanceBeamComponent.h"

UBalanceBeamComponent::UBalanceBeamComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mAbilitySetOverride = NULL;
    this->mAnimationOverride = NULL;
    this->mAngleToStartFalloff = 90.00f;
}


