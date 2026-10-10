#pragma once
#include "CoreMinimal.h"
#include "Engine/DebugCameraController.h"
#include "HeliosDebugCameraController.generated.h"

UCLASS(Blueprintable)
class HELIOS_API AHeliosDebugCameraController : public ADebugCameraController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MouseLookSensitivityX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MouseLookSensitivityY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ControllerLookSensitivityX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ControllerLookSensitivityY;
    
    AHeliosDebugCameraController(const FObjectInitializer& ObjectInitializer);

};

