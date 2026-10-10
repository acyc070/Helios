#include "PuzzleLeverActor.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

APuzzleLeverActor::APuzzleLeverActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("PuzzlePieceRoot"));
    this->bGrabbableFromFront = true;
    this->bGrabbableFromBack = true;
    this->mActionMaxSpeed = 75.00f;
    this->mAcceleration = 350.00f;
    this->mInitialAngle = 0.00f;
    this->mRootSceneComponent = (USceneComponent*)RootComponent;
    this->mBaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMesh"));
    this->mLeverMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LeverMesh"));
    this->mFrontPlayerPositionComponent = CreateDefaultSubobject<USceneComponent>(TEXT("FrontPlayerPositionComponent"));
    this->mBackPlayerPositionComponent = CreateDefaultSubobject<USceneComponent>(TEXT("BackPlayerPositionComponent"));
    this->mHandIKTarget = NULL;
    this->mBackPlayerPositionComponent->SetupAttachment(RootComponent);
    this->mBaseMesh->SetupAttachment(RootComponent);
    this->mFrontPlayerPositionComponent->SetupAttachment(RootComponent);
    this->mLeverMesh->SetupAttachment(RootComponent);
}


