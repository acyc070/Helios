#include "AnimationOverrideAction.h"

UAnimationOverrideAction::UAnimationOverrideAction() {
    this->mAnimation = NULL;
    this->mLoop = false;
    this->mMaxDuration = -1.00f;
    this->mRootMotion = EMovementRestriction::PhysicalMovement;
}

void UAnimationOverrideAction::OnAnimationDone(FName Name) {
}


