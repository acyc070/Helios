#include "AILookinator.h"

UAILookinator::UAILookinator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mLookOriginOffset = 0.00f;
    this->mPreLookAtPoseName = TEXT("PostLocomotion");
}

void UAILookinator::StopLooking() {
}

void UAILookinator::LookAtLocation(const FVector& Location, FAILookOptions lookOptions, ELookinatorMode LookMode, ELookCalculation lookOrigin) {
}

void UAILookinator::LookAtComponent(USceneComponent* Component, FAILookOptions lookOptions, ELookinatorMode LookMode, ELookCalculation lookOrigin) {
}

void UAILookinator::LookAtActor(AActor* Actor, FAILookOptions lookOptions, ELookinatorMode LookMode, ELookCalculation lookOrigin) {
}

FVector UAILookinator::GetTrackedLocation() const {
    return FVector{};
}

ELookinatorMode UAILookinator::GetLookMode() const {
    return ELookinatorMode::None;
}

FRotator UAILookinator::GetLookAtRotator(const FVector& Location, ELookCalculation overrideMode) const {
    return FRotator{};
}


