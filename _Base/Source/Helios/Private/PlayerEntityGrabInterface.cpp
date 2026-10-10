#include "PlayerEntityGrabInterface.h"
#include "EAbilitySetGrab.h"

UPlayerEntityGrabInterface::UPlayerEntityGrabInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mGrabType = EAbilitySetGrab::GrabItemFromGround;
}


