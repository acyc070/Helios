#include "AerodynamicsComponent.h"

UAerodynamicsComponent::UAerodynamicsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InterpSpeed = 2.00f;
    this->MaxTightness = 0.10f;
    this->MaxIntensity = 50.00f;
    this->VectorFieldAsset = NULL;
}

void UAerodynamicsComponent::WakeCallback(UPrimitiveComponent* WakingComponent, FName BoneName) {
}

void UAerodynamicsComponent::SleepCallback(UPrimitiveComponent* WakingComponent, FName BoneName) {
}


