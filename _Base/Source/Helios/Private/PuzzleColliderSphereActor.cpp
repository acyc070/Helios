#include "PuzzleColliderSphereActor.h"
#include "Components/SphereComponent.h"

APuzzleColliderSphereActor::APuzzleColliderSphereActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("PuzzlePieceSphereRoot"));
    this->doTriggerWithPlayer = true;
    this->doTriggerWithPlaypal = false;
    this->doTriggerWithOthers = false;
    this->mRootSphereComponent = (USphereComponent*)RootComponent;
}

void APuzzleColliderSphereActor::OnSphereComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void APuzzleColliderSphereActor::OnSphereComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

TArray<AActor*> APuzzleColliderSphereActor::GetActorsInCollider() const {
    return TArray<AActor*>();
}


