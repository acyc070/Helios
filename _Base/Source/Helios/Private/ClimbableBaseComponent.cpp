#include "ClimbableBaseComponent.h"

UClimbableBaseComponent::UClimbableBaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mRestriction = EClimbRestrictions::None;
}

bool UClimbableBaseComponent::GetClosestLocationInfo(const FVector& TargetLocation, bool mustBeClimbable, float minimumDistanceFromEdge, FVector& OutLocation, FVector& outForward) const {
    return false;
}


