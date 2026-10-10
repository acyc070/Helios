#include "PlayerLeverGrabInterface.h"
#include "EAbilitySetGrab.h"

UPlayerLeverGrabInterface::UPlayerLeverGrabInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mGrabType = EAbilitySetGrab::GrabLever;
    this->mCanAutoGrab = false;
    this->mLerpTime = 0.20f;
    this->mGrabbedGrabHelper = NULL;
}


