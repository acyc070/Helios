#include "LookAction.h"

ULookAction::ULookAction() {
    this->mLookMode = ELookActionMode::LookAtActor;
    this->mLookAtActor = NULL;
    this->mLookAtComponent = NULL;
    this->mMaxDuration = 5.00f;
    this->mLookSettings = ELookCalculation::BoneHeightAtCharacter;
    this->mTurnTowardsLookAt = false;
    this->mTurnAction = NULL;
}


