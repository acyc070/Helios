#include "AttemptGrabAction.h"

UAttemptGrabAction::UAttemptGrabAction() {
    this->mIKIDTask = EIKTaskIdentifier::IK_TARGET_INVALID;
    this->mIKTaskBlendout = 0.20f;
    this->mTarget = NULL;
    this->mGrabLevel = EHeightLevel::UnreachableLow;
    this->mIsCloseDistance = false;
    this->mIsBlockedGrab = false;
    this->mAttemptFinishedNotify = TEXT("Notify_AttackFinished");
    this->mOverrideGrabAnimation = NULL;
}


