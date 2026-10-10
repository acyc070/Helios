#include "PuzzleColliderBoxActor.h"
#include "Components/BoxComponent.h"

APuzzleColliderBoxActor::APuzzleColliderBoxActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("PuzzlePieceBoxRoot"));
    this->doTriggerWithPlayer = true;
    this->doTriggerWithPlaypal = false;
    this->doTriggerWithOthers = false;
    this->mRootBoxComponent = (UBoxComponent*)RootComponent;
}

void APuzzleColliderBoxActor::OnBoxComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void APuzzleColliderBoxActor::OnBoxComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

TArray<AActor*> APuzzleColliderBoxActor::GetActorsInCollider() const {
    return TArray<AActor*>();
}


