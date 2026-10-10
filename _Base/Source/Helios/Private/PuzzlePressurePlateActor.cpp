#include "PuzzlePressurePlateActor.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

APuzzlePressurePlateActor::APuzzlePressurePlateActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("PuzzlePieceRoot"));
    this->mDroppingDistance = 5.00f;
    this->mSpeedFactor = 1.00f;
    this->mTriggerWeight = 100.00f;
    this->doesPlayerCount = false;
    this->doesPlaypalCount = false;
    this->mRootSceneComponent = (USceneComponent*)RootComponent;
    this->mPlateMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Plate Mesh"));
    this->mPlateCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("Plate Collider"));
    this->mPlateCollider->SetupAttachment(RootComponent);
    this->mPlateMesh->SetupAttachment(RootComponent);
}

void APuzzlePressurePlateActor::OnPlateColliderOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void APuzzlePressurePlateActor::OnPlateColliderOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


