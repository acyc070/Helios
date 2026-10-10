#include "HintTrigger.h"
#include "TarEditableVolumeComponent.h"

AHintTrigger::AHintTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mDelayPopupTime = 0.00f;
    this->mTimeOnScreen = 0.00f;
    this->mHintTriggerEnabled = true;
    this->mRemoveHintOnExitTrigger = true;
    this->mDoOnce = false;
    this->mTriggerComponent = CreateDefaultSubobject<UTarEditableVolumeComponent>(TEXT("BoxComponent"));
    this->mBillboardComponent = NULL;
    this->mChalkboard = NULL;
}

void AHintTrigger::SetHintTriggerEnabled(bool Enabled) {
}

void AHintTrigger::OnDisplayDelayedHint() {
}

void AHintTrigger::HideAnyHint(UObject* InWorld) {
}

void AHintTrigger::EndHintOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AHintTrigger::BeginHintOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


