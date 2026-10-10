#include "PrototypePuzzlePieceActor.h"
#include "Components/SceneComponent.h"

APrototypePuzzlePieceActor::APrototypePuzzlePieceActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("PuzzlePieceRoot"));
    this->mInitialProgress = 0.00f;
    this->OnGrabAction = EOnGrabPrototypePiece::Switch_Hold;
    this->doResetOnRelease = true;
    this->mSpeed = 1.00f;
    this->mRootSceneComponent = (USceneComponent*)RootComponent;
}


