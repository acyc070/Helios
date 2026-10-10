#pragma once
#include "CoreMinimal.h"
#include "CameraActorBase.h"
#include "EBlendType.h"
#include "ExternalBlendSettings.h"
#include "PositionBlendSettings.h"
#include "CameraBlendVolume.generated.h"

UCLASS(Blueprintable)
class CAMERASYSTEMRUNTIME_API ACameraBlendVolume : public ACameraActorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlendType mBlendType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mApplyBlendVolumeBlockers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<ACameraActorBase>> mExternalCameraVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPositionBlendSettings mPositionBlendSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExternalBlendSettings mExternalBlendSettings;
    
    ACameraBlendVolume(const FObjectInitializer& ObjectInitializer);

};

