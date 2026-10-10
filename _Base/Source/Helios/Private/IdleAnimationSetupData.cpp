#include "IdleAnimationSetupData.h"

FIdleAnimationSetupData::FIdleAnimationSetupData() {
    this->Enabled = false;
    this->Animation = NULL;
    this->Layering = EAnimationLayering::Fullbody;
    this->Additive = false;
    this->RootMotionMode = EMovementRestriction::NormalMovement;
}

