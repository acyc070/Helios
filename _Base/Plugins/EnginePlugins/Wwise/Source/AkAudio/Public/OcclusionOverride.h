#pragma once
#include "CoreMinimal.h"
#include "OcclusionValues.h"
#include "OcclusionOverride.generated.h"

class AAkAudioVolume;

USTRUCT(BlueprintType)
struct FOcclusionOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AAkAudioVolume> mActivationVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOcclusionValues mOcclusionValues;
    
    AKAUDIO_API FOcclusionOverride();
};

