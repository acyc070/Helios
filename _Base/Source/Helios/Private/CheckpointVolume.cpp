#include "CheckpointVolume.h"

ACheckpointVolume::ACheckpointVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mPlayerStart = NULL;
    this->mOnlyCheckpointIfFullfilled = NULL;
}

void ACheckpointVolume::OnOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

bool ACheckpointVolume::HasAlreadyTriggered() const {
    return false;
}


