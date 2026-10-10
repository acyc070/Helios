#include "MovementAssistanceVolume.h"

AMovementAssistanceVolume::AMovementAssistanceVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bPlayerWasInside = false;
    this->bKeyboardOnly = true;
    this->relativeOrientation = 0.00f;
    this->Priority = 0;
}

void AMovementAssistanceVolume::SetRelativeOrientation(const float NewRelativeOrientation) {
}


