#include "PuzzleCrankActor.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

APuzzleCrankActor::APuzzleCrankActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("PuzzlePieceRoot"));
    this->bGrabbableFromFront = true;
    this->bGrabbableFromBack = true;
    this->mInitialAngle = 0.00f;
    this->isLimited = true;
    this->doAllowClockwiseRotation = true;
    this->doAllowCounterClockwiseRotation = true;
    this->mIdleBehaviour = ECrankDirection::Stay;
    this->mStandOffsetCurve = NULL;
    this->mRootSceneComponent = (USceneComponent*)RootComponent;
    this->mBaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMesh"));
    this->mCrankMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CrankMesh"));
    this->mFrontPlayerPositionComponent = CreateDefaultSubobject<USceneComponent>(TEXT("FrontPlayerPositionComponent"));
    this->mBackPlayerPositionComponent = CreateDefaultSubobject<USceneComponent>(TEXT("BackPlayerPositionComponent"));
    this->mHandIKTarget = NULL;
    this->mBackPlayerPositionComponent->SetupAttachment(RootComponent);
    this->mBaseMesh->SetupAttachment(RootComponent);
    this->mCrankMesh->SetupAttachment(RootComponent);
    this->mFrontPlayerPositionComponent->SetupAttachment(RootComponent);
}

void APuzzleCrankActor::UpdateStepFilter(float deltaProgress, float currentProgress, ECrankUpdateStepFilterOutputs& UpdateStepFilterOutput, int32 stepsPerLoop, float cooldownInSeconds) {
}


