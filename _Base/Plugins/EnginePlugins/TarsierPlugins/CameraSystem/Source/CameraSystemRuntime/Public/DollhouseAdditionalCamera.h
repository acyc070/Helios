#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Kismet/KismetMathLibrary.h"
#include "CameraFollowRotation.h"
#include "CameraRotationOffsets.h"
#include "DollhouseAdditionalCamera.generated.h"

class UDollhouseCameraComponent;
class UTarEditableVolumeComponent;

UCLASS(Blueprintable)
class CAMERASYSTEMRUNTIME_API ADollhouseAdditionalCamera : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mUseFollowRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraFollowRotation mCameraFollowRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraRotationOffsets mCameraRotationOffsets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDollhouseCameraComponent* mCameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTarEditableVolumeComponent* mEditableCameraVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mEnabled;
    
    ADollhouseAdditionalCamera(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetFollowScaleOverTime(float Target, float TimeSeconds, TEnumAsByte<EEasingFunc::Type> easingFunction);
    
};

