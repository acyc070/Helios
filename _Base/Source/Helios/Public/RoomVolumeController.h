#pragma once
#include "CoreMinimal.h"
#include "HeliosActor.h"
#include "RoomVolumeController.generated.h"

class UExponentialHeightFogComponent;
class UPostProcessComponent;

UCLASS(Blueprintable, HideDropdown, NotPlaceable, Transient)
class HELIOS_API ARoomVolumeController : public AHeliosActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPostProcessComponent* BackgroundPPComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPostProcessComponent* BackgroundMaskPPComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPostProcessComponent* TargetPPComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPostProcessComponent* SourcePPComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPostProcessComponent* FadingPPComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPostProcessComponent* CustomBlendingPPComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UExponentialHeightFogComponent* FogComponent;
    
public:
    ARoomVolumeController(const FObjectInitializer& ObjectInitializer);

};

