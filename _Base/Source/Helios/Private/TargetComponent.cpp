#include "TargetComponent.h"

UTargetComponent::UTargetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mCategories = 0;
    this->mValidAngle = 180.00f;
    this->mPreciseAlignment = EPreciseJumpAlignmentType::Feet;
    this->mEnabled = true;
}

void UTargetComponent::Enable() {
}

void UTargetComponent::Disable() {
}


