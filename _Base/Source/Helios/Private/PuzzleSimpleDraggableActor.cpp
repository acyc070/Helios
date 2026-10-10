#include "PuzzleSimpleDraggableActor.h"

APuzzleSimpleDraggableActor::APuzzleSimpleDraggableActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bRequiresCooperative = false;
    this->bUseInteracterVelocity = false;
    this->mShouldDoEncroachmentCheck = true;
}

void APuzzleSimpleDraggableActor::ReleaseGrab(EGrabReleaseOptions releaseOption) {
}


int32 APuzzleSimpleDraggableActor::GetNumGrabbers() const {
    return 0;
}

TArray<AControlledPawn*> APuzzleSimpleDraggableActor::GetGrabbers() const {
    return TArray<AControlledPawn*>();
}

bool APuzzleSimpleDraggableActor::CanGrabBP_Implementation(AControlledPawn* Pawn) const {
    return false;
}


