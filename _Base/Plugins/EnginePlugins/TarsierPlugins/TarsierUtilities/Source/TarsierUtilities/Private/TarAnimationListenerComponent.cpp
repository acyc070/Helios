#include "TarAnimationListenerComponent.h"

UTarAnimationListenerComponent::UTarAnimationListenerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Mesh = NULL;
}

void UTarAnimationListenerComponent::OnSubstepMeshStepped(float stepTime) {
}


