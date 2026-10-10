#include "GrabbableLedgeComponent.h"

UGrabbableLedgeComponent::UGrabbableLedgeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mPhysicalSurfaceOverride = SurfaceType_Default;
    this->mLedgeRadius = 5.00f;
    this->mLedgeEnabled = true;
    this->mAllowClimbUpOnTop = true;
    this->mIgnoreBlockingCheck = true;
    this->mExitOnTopType = ELedgeExitOnTopTypes::Standing;
}

void UGrabbableLedgeComponent::SetLedgeEnabled(bool Enabled) {
}

bool UGrabbableLedgeComponent::IsLedgeEnabled() const {
    return false;
}

bool UGrabbableLedgeComponent::GetClosestPointOnLedge(const FVector& Location, bool mustBeClimbable, float minimumDistanceToEdge, FVector& outClosestPoint, FVector& outLedgeForward) const {
    return false;
}


