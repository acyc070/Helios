#pragma once
#include "CoreMinimal.h"
#include "HeliosFloatInterval.h"
#include "AINavigationOptions_Cruise.generated.h"

USTRUCT(BlueprintType)
struct FAINavigationOptions_Cruise {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mDesiredMoveRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mVaryRateOverTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mAlternateMoveRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHeliosFloatInterval mBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHeliosFloatInterval mVariationDuration;
    
    HELIOS_API FAINavigationOptions_Cruise();
};

