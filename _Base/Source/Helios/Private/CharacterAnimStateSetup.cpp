#include "CharacterAnimStateSetup.h"

FCharacterAnimStateSetup::FCharacterAnimStateSetup() {
    this->Enabled = false;
    this->Animation = NULL;
    this->BlendSpace = NULL;
    this->Layering = EAnimationLayering::Fullbody;
    this->Additive = false;
    this->Loop = false;
    this->RootMotionMode = EMovementRestriction::NormalMovement;
}

