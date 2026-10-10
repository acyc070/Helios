#include "CameraSystemProjectSettings.h"

UCameraSystemProjectSettings::UCameraSystemProjectSettings() {
    this->CameraPositionLerpSpeed = 2.00f;
    this->mCameraZMultiplier = 10.00f;
    this->mBlendWeightLerpSpeed = 3.00f;
    this->LookAroundStick = EControllerAnalogStick::CAS_RightStick;
    this->bInvertPitch = true;
    this->LookAroundYaw = 20.00f;
    this->LookAroundPitch = 15.00f;
    this->bUseSpringDampedLookAround = true;
    this->LookAroundSpringConstant = 8.00f;
    this->LookAroundLerpSpeed = 4.00f;
    this->YawDeadzone = 5.00f;
    this->PitchDeadzone = 7.00f;
    this->mMinimalDistanceToPlayerZoom = 100.00f;
    this->mUsePOIOffsetForActiveCamera = false;
}


