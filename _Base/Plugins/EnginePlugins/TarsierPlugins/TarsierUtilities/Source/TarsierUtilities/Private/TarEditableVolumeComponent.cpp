#include "TarEditableVolumeComponent.h"

UTarEditableVolumeComponent::UTarEditableVolumeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShapeBodySetup = NULL;
    this->mForceNoScale = false;
}

void UTarEditableVolumeComponent::SetShapeColor(FColor Color) {
}


