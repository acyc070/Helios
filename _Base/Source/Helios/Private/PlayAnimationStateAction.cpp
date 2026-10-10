#include "PlayAnimationStateAction.h"

UPlayAnimationStateAction::UPlayAnimationStateAction() {
    this->mTowardsActor = NULL;
    this->mTargetUpdateMode = EPlayAnimStateTargetUpdateMode::EveryFrame;
    this->mUseCustomAnimationOptions = false;
}

void UPlayAnimationStateAction::OnAnimationDone(FName Name) {
}


