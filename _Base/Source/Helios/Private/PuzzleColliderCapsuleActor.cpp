#include "PuzzleColliderCapsuleActor.h"
#include "Components/CapsuleComponent.h"

APuzzleColliderCapsuleActor::APuzzleColliderCapsuleActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("PuzzlePieceCapsuleRoot"));
    this->doTriggerWithPlayer = true;
    this->doTriggerWithPlaypal = false;
    this->doTriggerWithOthers = false;
    this->mRootCapsuleComponent = (UCapsuleComponent*)RootComponent;
}

void APuzzleColliderCapsuleActor::OnCapsuleComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void APuzzleColliderCapsuleActor::OnCapsuleComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

TArray<AActor*> APuzzleColliderCapsuleActor::GetActorsInCollider() const {
    return TArray<AActor*>();
}


