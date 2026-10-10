#include "IkClimbLimbSettings.h"

FIkClimbLimbSettings::FIkClimbLimbSettings() {
    this->TaskIkId = EIKTaskIdentifier::IK_TARGET_INVALID;
    this->CurrentGrabHelper = NULL;
    this->PreviousGrabHelper = NULL;
}

