#include "AtlasLeechAnimInstance.h"

UAtlasLeechAnimInstance::UAtlasLeechAnimInstance() {
    this->MovementAngle = 0.00f;
    this->MovementSpeed = 0.00f;
    this->AttackAngle = 0.00f;
    this->LeechIsBlocked = false;
    this->LookAtAngle = 0.00f;
    this->LookAtEnabled = false;
    this->bSkipFullAnimStateMachine = false;
    this->OwningLeech = NULL;
}


