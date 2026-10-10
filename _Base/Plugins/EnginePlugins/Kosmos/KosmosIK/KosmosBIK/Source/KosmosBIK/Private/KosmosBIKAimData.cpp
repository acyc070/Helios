#include "KosmosBIKAimData.h"

FKosmosBIKAimData::FKosmosBIKAimData() {
    this->AimingType = EKosmosBIKAimingOptions::SingleHand;
    this->LockFreeArm = false;
    this->bEnableTriggerHandOverride = false;
    this->bUseSeperateAimTarget = false;
    this->HandleHandAlpha = 0.00f;
}

