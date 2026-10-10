#include "PawnTriggerVolume.h"
#include "TarEditableVolumeComponent.h"

APawnTriggerVolume::APawnTriggerVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UTarEditableVolumeComponent>(TEXT("mEditableVolumeComponent"))) {
    this->bGenerateOverlapEventsDuringLevelStreaming = true;
    this->mEnabled = true;
    this->mFloatNameAndIconInFront = false;
    this->mEditableVolumeComponent = (UTarEditableVolumeComponent*)RootComponent;
    this->mBillboard = NULL;
    this->mTextRenderComponent = NULL;
}

void APawnTriggerVolume::SetEnabled(bool Enabled) {
}



void APawnTriggerVolume::OnEndOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void APawnTriggerVolume::OnBeginOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

int32 APawnTriggerVolume::NumOverlappingPawns() const {
    return 0;
}

bool APawnTriggerVolume::IsPawnOverlapping(APawn* Pawn) const {
    return false;
}


