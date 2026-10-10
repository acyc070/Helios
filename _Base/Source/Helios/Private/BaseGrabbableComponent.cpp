#include "BaseGrabbableComponent.h"

UBaseGrabbableComponent::UBaseGrabbableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mGrabbedPhysicsComponent = NULL;
    this->BodySetup = NULL;
}

UGrabHelper* UBaseGrabbableComponent::GetClosestGrabHelper(const FVector& Location) const {
    return NULL;
}


