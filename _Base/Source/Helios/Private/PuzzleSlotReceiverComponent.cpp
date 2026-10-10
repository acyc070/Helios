#include "PuzzleSlotReceiverComponent.h"

UPuzzleSlotReceiverComponent::UPuzzleSlotReceiverComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mArrow = NULL;
    this->mCLOCatchingRadius = 50.00f;
}

AActor* UPuzzleSlotReceiverComponent::GetCarryableInSlot() const {
    return NULL;
}

bool UPuzzleSlotReceiverComponent::DoesHaveCarryable() const {
    return false;
}


