#include "CharacterRepulsionComponent.h"

UCharacterRepulsionComponent::UCharacterRepulsionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mEnabled = true;
    this->mMaxRepulsionDistance = 75.00f;
    this->mMaxRepulsionStrength = 500.00f;
    this->mCharactersToRepulse = 0;
    this->mRepulsionPriority = 0;
    this->mCharacterChalkboard = NULL;
    this->mCharacterFlowControlComponent = NULL;
}

void UCharacterRepulsionComponent::SetEnabled(bool Enabled) {
}

bool UCharacterRepulsionComponent::IsRepulsing() const {
    return false;
}

bool UCharacterRepulsionComponent::IsEnabled() const {
    return false;
}

int32 UCharacterRepulsionComponent::GetRepulsionPriority() const {
    return 0;
}

float UCharacterRepulsionComponent::GetMaxRepulsionStrength() const {
    return 0.0f;
}

float UCharacterRepulsionComponent::GetMaxRepulsionDistance() const {
    return 0.0f;
}

bool UCharacterRepulsionComponent::CanBeRepulsedBy(UCharacterRepulsionComponent* otherRepulsionComponent) const {
    return false;
}


