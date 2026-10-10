#include "UnderTheBedVolumeComponent.h"

UUnderTheBedVolumeComponent::UUnderTheBedVolumeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Mobility = EComponentMobility::Static;
    this->mCooldownTime = -1.00f;
    this->bRepositionMeshesOnWorldReloaded = false;
}

void UUnderTheBedVolumeComponent::SetUsed() {
}

void UUnderTheBedVolumeComponent::ResetUsed() {
}

void UUnderTheBedVolumeComponent::OnWorldReloaded(UWorld* World) {
}

bool UUnderTheBedVolumeComponent::HasOverlappingPawns() const {
    return false;
}

int32 UUnderTheBedVolumeComponent::GetOverlappingPawnsNumber() const {
    return 0;
}

void UUnderTheBedVolumeComponent::EndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

bool UUnderTheBedVolumeComponent::CanBeUsed() {
    return false;
}

void UUnderTheBedVolumeComponent::BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


