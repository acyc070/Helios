#pragma once
#include "CoreMinimal.h"
#include "HeliosFloatInterval.generated.h"

USTRUCT(BlueprintType)
struct HELIOS_API FHeliosFloatInterval {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Max;
    
    FHeliosFloatInterval();
};

