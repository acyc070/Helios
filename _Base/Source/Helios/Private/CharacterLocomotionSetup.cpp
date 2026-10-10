#include "CharacterLocomotionSetup.h"

FCharacterLocomotionSetup::FCharacterLocomotionSetup() {
    this->MoveSpeed = 0.00f;
    this->FastMoveSpeed = 0.00f;
    this->UseDefaultAcceleration = false;
    this->Acceleration = 0.00f;
    this->Stay = NULL;
    this->Move = NULL;
    this->FastMove = NULL;
    this->StayBlendspace = NULL;
    this->MoveBlendspace = NULL;
    this->StartMovementBlendSpace = NULL;
    this->StopMovementBlendspace = NULL;
    this->QuickTurnMovementBlendspace = NULL;
    this->mShouldStrafe = false;
    this->AdditionalMoveBlendspace = NULL;
    this->StartMovementAdditionalBlendspace = NULL;
    this->AdditiveIdleBlendspace = NULL;
    this->AdditiveMoveBlendspace = NULL;
    this->AnimOverridePriority = EAnimationOverridePriority::Default;
}

