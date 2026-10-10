#pragma once
#include "CoreMinimal.h"
#include "NoiseThreshold.generated.h"

USTRUCT(BlueprintType)
struct FNoiseThreshold {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mVelocityThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mNoiseReportInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mNoiseLoudness;
    
    TARSIERWWISERUNTIMEEXTENSION_API FNoiseThreshold();
};

