#include "PuzzleLightIntensityActor.h"
#include "Components/SceneComponent.h"

APuzzleLightIntensityActor::APuzzleLightIntensityActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("PuzzlePieceRoot"));
    this->mInitialProgress = 0.00f;
    this->isUpdatingIntensity = true;
    this->mInitialIntensity = 0.00f;
    this->mFinalIntensity = 0.00f;
    this->isUpdatingColor = false;
    this->mRootSceneComponent = (USceneComponent*)RootComponent;
}


