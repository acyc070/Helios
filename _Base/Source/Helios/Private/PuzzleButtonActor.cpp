#include "PuzzleButtonActor.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

APuzzleButtonActor::APuzzleButtonActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("PuzzlePieceRoot"));
    this->mInitialProgress = 0.00f;
    this->mPushingDistance = 10.00f;
    this->mTriggerForce = 100.00f;
    this->doesPlayerCount = true;
    this->doesPlaypalCount = false;
    this->mResetTime = 0.00f;
    this->mResetCastProfileName = TEXT("OverlapAllDynamic");
    this->mRootSceneComponent = (USceneComponent*)RootComponent;
    this->mBaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Base Mesh"));
    this->mButtonMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Button Mesh"));
    this->mBaseMesh->SetupAttachment(RootComponent);
    this->mButtonMesh->SetupAttachment(RootComponent);
}

void APuzzleButtonActor::OnButtonHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}


