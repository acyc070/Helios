#include "PuzzleSlotCrankActor.h"
#include "PuzzleSlotReceiverComponent.h"

APuzzleSlotCrankActor::APuzzleSlotCrankActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mAttachmentDistance = 160.00f;
    this->mSpeedAttachment = 1.00f;
    this->mAutoInsertCrank = true;
    this->mRootComponent = NULL;
    this->mSlotReceiver = CreateDefaultSubobject<UPuzzleSlotReceiverComponent>(TEXT("slotReceiver"));
    this->mSlotReceiver->SetupAttachment(mCrankMesh);
}

bool APuzzleSlotCrankActor::HasCrankBP() {
    return false;
}

float APuzzleSlotCrankActor::GetHeightRelativeToInserter(AActor* inserter) const {
    return 0.0f;
}

void APuzzleSlotCrankActor::DetachAllCarriables() {
}

void APuzzleSlotCrankActor::AttachPickupComponent(AActor* pickupActor, bool instant) {
}

void APuzzleSlotCrankActor::AttachCarriable(FPuzzlePieceEditorDropDown carriable, bool instant) {
}


