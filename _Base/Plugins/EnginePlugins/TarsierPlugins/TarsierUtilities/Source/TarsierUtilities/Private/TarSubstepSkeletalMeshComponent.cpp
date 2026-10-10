#include "TarSubstepSkeletalMeshComponent.h"

UTarSubstepSkeletalMeshComponent::UTarSubstepSkeletalMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnableSubstepping = true;
    this->TargetSubstepTime = 0.02f;
    this->MinimumSubstepTime = 0.00f;
}


