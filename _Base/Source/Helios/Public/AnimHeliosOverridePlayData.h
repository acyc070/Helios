#pragma once
#include "CoreMinimal.h"
#include "AnimHeliosOverrideSequenceEntry.h"
#include "AnimHeliosOverridePlayData.generated.h"

USTRUCT(BlueprintType)
struct FAnimHeliosOverridePlayData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimHeliosOverrideSequenceEntry mSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mPreviousTimeAccumulator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mInternalTimeAccumulator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mIsLooping;
    
    HELIOS_API FAnimHeliosOverridePlayData();
};

