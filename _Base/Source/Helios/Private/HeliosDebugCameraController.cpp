#include "HeliosDebugCameraController.h"

AHeliosDebugCameraController::AHeliosDebugCameraController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->MouseLookSensitivityX = 0.08f;
    this->MouseLookSensitivityY = 0.05f;
    this->ControllerLookSensitivityX = 0.80f;
    this->ControllerLookSensitivityY = 0.50f;
}


