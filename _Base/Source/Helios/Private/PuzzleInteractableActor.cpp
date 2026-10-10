#include "PuzzleInteractableActor.h"
#include "Components/SceneComponent.h"

APuzzleInteractableActor::APuzzleInteractableActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("PuzzlePieceRoot"));
    this->bGrabbableFromFront = true;
    this->bGrabbableFromBack = false;
    this->bAutomaticInteraction = false;
    this->PuzzlePieceRoot = (USceneComponent*)RootComponent;
    this->FrontPlayerPositionComponent = CreateDefaultSubobject<USceneComponent>(TEXT("FrontPlayerPositionComponent"));
    this->BackPlayerPositionComponent = CreateDefaultSubobject<USceneComponent>(TEXT("BackPlayerPositionComponent"));
    this->BackPlayerPositionComponent->SetupAttachment(RootComponent);
    this->FrontPlayerPositionComponent->SetupAttachment(RootComponent);
}


int32 APuzzleInteractableActor::GetNumGrabbers() const {
    return 0;
}

TArray<AControlledPawn*> APuzzleInteractableActor::GetGrabbers() const {
    return TArray<AControlledPawn*>();
}

bool APuzzleInteractableActor::CanGrabBP_Implementation(AControlledPawn* Pawn) const {
    return false;
}


