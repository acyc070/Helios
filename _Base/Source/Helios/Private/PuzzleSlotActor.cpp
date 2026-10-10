#include "PuzzleSlotActor.h"
#include "Components/StaticMeshComponent.h"
#include "PuzzleSlotReceiverComponent.h"

APuzzleSlotActor::APuzzleSlotActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PuzzleSlotRoot"));
    this->mAttachmentDistance = 160.00f;
    this->mSpeedAttachment = 1.00f;
    this->mInsertCooldown = 0.00f;
    this->mPlayerCanRemove = false;
    this->mAutomaticInteraction = true;
    this->mRadius = 30.00f;
    this->mRootComponent = (UStaticMeshComponent*)RootComponent;
    this->mSlotReceiver = CreateDefaultSubobject<UPuzzleSlotReceiverComponent>(TEXT("slotReceiver"));
    this->mSlotReceiver->SetupAttachment(RootComponent);
}

float APuzzleSlotActor::GetHeightRelativeToInserter(AActor* inserter) const {
    return 0.0f;
}

void APuzzleSlotActor::DetachAllCarriables() {
}

bool APuzzleSlotActor::CanGrabBP_Implementation(AControlledPawn* Pawn) const {
    return false;
}

UAnimSequenceBase* APuzzleSlotActor::CalculateInsertAnimation(AActor* inserter) {
    return NULL;
}

void APuzzleSlotActor::AttachPickupComponent(AActor* pickupActor, bool instant) {
}

void APuzzleSlotActor::AttachCarriable(FPuzzlePieceEditorDropDown carriable, bool instant) {
}


