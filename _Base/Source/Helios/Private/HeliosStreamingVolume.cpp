#include "HeliosStreamingVolume.h"

AHeliosStreamingVolume::AHeliosStreamingVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mStreamoutHysteresisDistance = 500.00f;
}

void AHeliosStreamingVolume::OnPlayerSpawned(AControlledPawn* PlayerPawn) {
}

void AHeliosStreamingVolume::OnPlayerPawnEvent(const FGenericGameEvent& gameEvent) {
}

void AHeliosStreamingVolume::OnEndOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void AHeliosStreamingVolume::OnBeginOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}


