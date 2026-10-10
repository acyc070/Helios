#include "FlashlightCombatComponent.h"

UFlashlightCombatComponent::UFlashlightCombatComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mOutsideCombatAbilitySet = NULL;
    this->mInCombatAbilitySet = NULL;
    this->mFlowControlComponent = NULL;
    this->mCurrentAbilitySet = NULL;
}

void UFlashlightCombatComponent::SetInCombat(bool Value) {
}

void UFlashlightCombatComponent::OnPawnDeathEvent(const FGenericGameEvent& gameEvent) {
}

bool UFlashlightCombatComponent::IsInCombat() const {
    return false;
}


