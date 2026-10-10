#include "CameraManager.h"

ACameraManager::ACameraManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultModifiers.AddDefaulted(1);
}

void ACameraManager::TeleportFixup(const FVector& Delta, bool motionBlurFixup) {
}

void ACameraManager::StopExternalOverTime(float secondsToBlendFromExternal, TEnumAsByte<EEasingFunc::Type> easingFunction) {
}

void ACameraManager::StartExternalOverTime(AActor*& newCameraActor, float secondsToBlendToExternal, TEnumAsByte<EEasingFunc::Type> easingFunction) {
}

void ACameraManager::SetViewOverTime(ACameraActorBase*& newCameraActor, float secondsToReachTarget, TEnumAsByte<EEasingFunc::Type> easingFunction) {
}

void ACameraManager::SetOverrideExternalCamera(bool bOverride) {
}

void ACameraManager::SetOverrideCamera(bool bOverride) {
}

void ACameraManager::SetOverlayColorFade(FLinearColor Color, float alphaTarget, float TimeSeconds, TEnumAsByte<EEasingFunc::Type> easingFunction) {
}

void ACameraManager::SetGlobalCameraZoom(float targetZoomValue, float secondsToReachTarget) {
}

void ACameraManager::ResetViewOverTime(float secondsToReachTarget, TEnumAsByte<EEasingFunc::Type> easingFunction) {
}

bool ACameraManager::GetOverrideExternalCamera() const {
    return false;
}

float ACameraManager::GetGlobalCameraZoom() {
    return 0.0f;
}

void ACameraManager::ClearCameraZoom(int32 instigatorID, float TimeSeconds, TEnumAsByte<EEasingFunc::Type> easingFunction) {
}

void ACameraManager::AddOverriddenToggleCameraSet(const FVector& LocationOffset, const FRotator& Rotation) {
}

void ACameraManager::AddOverriddenCameraZoom(float Zoom) {
}

void ACameraManager::AddOverriddenCameraShake(float Time, float Force) {
}

void ACameraManager::AddOverriddenCameraRotation(const FRotator& RotationOffset) {
}

void ACameraManager::AddOverriddenCameraLocation(const FVector& LocationOffset) {
}

int32 ACameraManager::AddCameraZoomAfterDelay(UObject*& zoomInstigator, float zoomValue, float TimeSeconds, float initialDelay, EZoomChannel zoomChannel, TEnumAsByte<EEasingFunc::Type> easingFunction) {
    return 0;
}

int32 ACameraManager::AddCameraZoom(UObject*& zoomInstigator, float zoomValue, float TimeSeconds, EZoomChannel zoomChannel, TEnumAsByte<EEasingFunc::Type> easingFunction) {
    return 0;
}


