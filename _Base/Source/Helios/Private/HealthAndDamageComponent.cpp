#include "HealthAndDamageComponent.h"

UHealthAndDamageComponent::UHealthAndDamageComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mImmuneToDamage = true;
    this->mMaxHealth = 7777.00f;
    this->mIsDamageableAfterDead = true;
}

float UHealthAndDamageComponent::RemainingHealth() const {
    return 0.0f;
}

bool UHealthAndDamageComponent::IsDamageableAfterDead() const {
    return false;
}

bool UHealthAndDamageComponent::IsAlive() const {
    return false;
}


