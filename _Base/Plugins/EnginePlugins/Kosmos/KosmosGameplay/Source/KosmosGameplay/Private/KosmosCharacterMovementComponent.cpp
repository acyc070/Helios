#include "KosmosCharacterMovementComponent.h"

UKosmosCharacterMovementComponent::UKosmosCharacterMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bShowDebugLines = false;
    this->CustomGravityScale = 1.00f;
    this->CustomGravityFallScale = 1.00f;
}

void UKosmosCharacterMovementComponent::SetGravityDirection(FVector NewGravityDirection) {
}

FVector UKosmosCharacterMovementComponent::GetGravityDirection(bool bAvoidZeroGravity) const {
    return FVector{};
}


