#include "RoomVolume.h"
#include "TarEditableVolumeComponent.h"

ARoomVolume::ARoomVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bGenerateOverlapEventsDuringLevelStreaming = true;
    this->RootComponent = CreateDefaultSubobject<UTarEditableVolumeComponent>(TEXT("mRootBoxComponent"));
    this->mRootBoxComponent = (UTarEditableVolumeComponent*)RootComponent;
}

void ARoomVolume::EndOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void ARoomVolume::BeginOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void ARoomVolume::ApplyRoomVolumeChanges() {
}


