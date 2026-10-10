#include "DollhouseCameraComponent.h"

UDollhouseCameraComponent::UDollhouseCameraComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bConstrainAspectRatio = true;
    this->mUseRatio = false;
}


