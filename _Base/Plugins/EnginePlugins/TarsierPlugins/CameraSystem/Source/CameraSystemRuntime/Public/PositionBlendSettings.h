#pragma once
#include "CoreMinimal.h"
#include "PositionBlendSettings.generated.h"

class ACameraActorBase;

USTRUCT(BlueprintType)
struct FPositionBlendSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ACameraActorBase> mSourceVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ACameraActorBase> mTargetVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mBlendAlongX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mBlendAlongY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mBlendAlongZ;
    
    CAMERASYSTEMRUNTIME_API FPositionBlendSettings();
};

