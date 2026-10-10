#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/KismetMathLibrary.h"
#include "Camera/PlayerCameraManager.h"
#include "EZoomChannel.h"
#include "CameraManager.generated.h"

class AActor;
class ACameraActorBase;
class UObject;

UCLASS(Blueprintable, NonTransient)
class CAMERASYSTEMRUNTIME_API ACameraManager : public APlayerCameraManager {
    GENERATED_BODY()
public:
    ACameraManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TeleportFixup(const FVector& Delta, bool motionBlurFixup);
    
    UFUNCTION(BlueprintCallable)
    void StopExternalOverTime(float secondsToBlendFromExternal, TEnumAsByte<EEasingFunc::Type> easingFunction);
    
    UFUNCTION(BlueprintCallable)
    void StartExternalOverTime(UPARAM(Ref) AActor*& newCameraActor, float secondsToBlendToExternal, TEnumAsByte<EEasingFunc::Type> easingFunction);
    
    UFUNCTION(BlueprintCallable)
    void SetViewOverTime(UPARAM(Ref) ACameraActorBase*& newCameraActor, float secondsToReachTarget, TEnumAsByte<EEasingFunc::Type> easingFunction);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideExternalCamera(bool bOverride);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideCamera(bool bOverride);
    
    UFUNCTION(BlueprintCallable)
    void SetOverlayColorFade(FLinearColor Color, float alphaTarget, float TimeSeconds, TEnumAsByte<EEasingFunc::Type> easingFunction);
    
    UFUNCTION(BlueprintCallable)
    void SetGlobalCameraZoom(float targetZoomValue, float secondsToReachTarget);
    
    UFUNCTION(BlueprintCallable)
    void ResetViewOverTime(float secondsToReachTarget, TEnumAsByte<EEasingFunc::Type> easingFunction);
    
    UFUNCTION(BlueprintPure)
    bool GetOverrideExternalCamera() const;
    
    UFUNCTION(BlueprintCallable)
    float GetGlobalCameraZoom();
    
    UFUNCTION(BlueprintCallable)
    void ClearCameraZoom(int32 instigatorID, float TimeSeconds, TEnumAsByte<EEasingFunc::Type> easingFunction);
    
    UFUNCTION(BlueprintCallable)
    void AddOverriddenToggleCameraSet(const FVector& LocationOffset, const FRotator& Rotation);
    
    UFUNCTION(BlueprintCallable)
    void AddOverriddenCameraZoom(float Zoom);
    
    UFUNCTION(BlueprintCallable)
    void AddOverriddenCameraShake(float Time, float Force);
    
    UFUNCTION(BlueprintCallable)
    void AddOverriddenCameraRotation(const FRotator& RotationOffset);
    
    UFUNCTION(BlueprintCallable)
    void AddOverriddenCameraLocation(const FVector& LocationOffset);
    
    UFUNCTION(BlueprintCallable)
    int32 AddCameraZoomAfterDelay(UObject*& zoomInstigator, float zoomValue, float TimeSeconds, float initialDelay, EZoomChannel zoomChannel, TEnumAsByte<EEasingFunc::Type> easingFunction);
    
    UFUNCTION(BlueprintCallable)
    int32 AddCameraZoom(UObject*& zoomInstigator, float zoomValue, float TimeSeconds, EZoomChannel zoomChannel, TEnumAsByte<EEasingFunc::Type> easingFunction);
    
};

