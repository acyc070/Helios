#include "PuzzleTimerBoxActor.h"
#include "TarEditableVolumeComponent.h"

APuzzleTimerBoxActor::APuzzleTimerBoxActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UTarEditableVolumeComponent>(TEXT("PuzzlePieceBoxRoot"));
    this->doTriggerWithPlayer = true;
    this->doTriggerWithPlaypal = false;
    this->doTriggerWithOthers = false;
    this->mTimeLimit = 10.00f;
    this->mResetType = EPuzzleTimerBoxResetType::TimerReset_Pause;
    this->bCanResetOnLimit = true;
    this->mRootBoxComponent = (UTarEditableVolumeComponent*)RootComponent;
}

void APuzzleTimerBoxActor::ResumeTimerBox() {
}

void APuzzleTimerBoxActor::PauseTimerBox() {
}

void APuzzleTimerBoxActor::OnBoxComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void APuzzleTimerBoxActor::OnBoxComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

float APuzzleTimerBoxActor::GetCurrentTimeFromProgress() const {
    return 0.0f;
}

TArray<AActor*> APuzzleTimerBoxActor::GetActorsInCollider() const {
    return TArray<AActor*>();
}


