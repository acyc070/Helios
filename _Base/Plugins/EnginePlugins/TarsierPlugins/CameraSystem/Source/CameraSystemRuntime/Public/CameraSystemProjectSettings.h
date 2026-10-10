#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "Components/InputComponent.h"
#include "CameraRotationLerpParams.h"
#include "CameraTemplateSettings.h"
#include "EZoomChannel.h"
#include "CameraSystemProjectSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class CAMERASYSTEMRUNTIME_API UCameraSystemProjectSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, SimpleDisplay, meta=(AllowPrivateAccess=true))
    float CameraPositionLerpSpeed;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraRotationLerpParams mCameraRotationLerpParams;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mCameraZMultiplier;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval mCameraZMultiplierLocationInterval;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval mCameraZMultiplierRotationInterval;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, SimpleDisplay, meta=(AllowPrivateAccess=true))
    float mBlendWeightLerpSpeed;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, SimpleDisplay, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EControllerAnalogStick::Type> LookAroundStick;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, SimpleDisplay, meta=(AllowPrivateAccess=true))
    bool bInvertPitch;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, SimpleDisplay, meta=(AllowPrivateAccess=true))
    float LookAroundYaw;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, SimpleDisplay, meta=(AllowPrivateAccess=true))
    float LookAroundPitch;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, SimpleDisplay, meta=(AllowPrivateAccess=true))
    bool bUseSpringDampedLookAround;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, SimpleDisplay, meta=(AllowPrivateAccess=true))
    float LookAroundSpringConstant;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, SimpleDisplay, meta=(AllowPrivateAccess=true))
    float LookAroundLerpSpeed;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, SimpleDisplay, meta=(AllowPrivateAccess=true))
    float YawDeadzone;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, SimpleDisplay, meta=(AllowPrivateAccess=true))
    float PitchDeadzone;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, SimpleDisplay, meta=(AllowPrivateAccess=true))
    float mMinimalDistanceToPlayerZoom;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval mZoomPercentageInterval;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EZoomChannel, float> mZoomChannelWeights;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, SimpleDisplay, meta=(AllowPrivateAccess=true))
    bool mUsePOIOffsetForActiveCamera;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FCameraTemplateSettings> mCameraTemplates;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, SimpleDisplay, meta=(AllowPrivateAccess=true))
    FSoftObjectPath mPreviewMeshRef;
    
    UCameraSystemProjectSettings();

};

