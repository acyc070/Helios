#pragma once
#include "CoreMinimal.h"
#include "Kismet/KismetMathLibrary.h"
#include "CameraActorBase.h"
#include "CameraFollowRotation.h"
#include "CameraRotationOffsets.h"
#include "DollhouseCameraActor.generated.h"

class ADollhouseAdditionalCamera;
class UDollhouseCameraComponent;
class USceneComponent;
class UTarEditableVolumeComponent;

UCLASS(Blueprintable)
class CAMERASYSTEMRUNTIME_API ADollhouseCameraActor : public ACameraActorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* mCameraRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDollhouseCameraComponent* mCameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTarEditableVolumeComponent* mEditableCameraVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mUseFollowRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraFollowRotation mCameraFollowRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraRotationOffsets mCameraRotationOffsets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float mCurrentViewValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<ADollhouseAdditionalCamera>> mAdditionalDollhouseCameras;
    
    ADollhouseCameraActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetFollowScaleOverTime(float Target, float TimeSeconds, TEnumAsByte<EEasingFunc::Type> easingFunction);
    
    UFUNCTION()
    void AdjustCameraVolume();
    
};

