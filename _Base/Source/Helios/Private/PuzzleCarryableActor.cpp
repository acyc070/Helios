#include "PuzzleCarryableActor.h"
#include "Components/StaticMeshComponent.h"
#include "PickupComponent.h"

ADEPRECATED_PuzzleCarryableActor::ADEPRECATED_PuzzleCarryableActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PuzzlePieceSMRoot"));
    this->mEjectSpeed = 20.00f;
    this->mEjectDistance = 50.00f;
    this->mRootSceneComponent = (USceneComponent*)RootComponent;
    this->mNewPickupComponent = CreateDefaultSubobject<UPickupComponent>(TEXT("NewPickupComponent"));
}

void ADEPRECATED_PuzzleCarryableActor::DetachFromSlot(bool eject) {
}


