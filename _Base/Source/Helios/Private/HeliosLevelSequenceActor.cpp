#include "HeliosLevelSequenceActor.h"

AHeliosLevelSequenceActor::AHeliosLevelSequenceActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SuppressRestartFromCheckpoint = false;
    this->SuppressTickWhenNotPlaying = true;
}

void AHeliosLevelSequenceActor::OnStop() {
}

void AHeliosLevelSequenceActor::OnPlay() {
}


