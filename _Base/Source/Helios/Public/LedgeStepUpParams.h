#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LedgeClimbParams.h"
#include "LedgeStepUpParams.generated.h"

USTRUCT(BlueprintType)
struct FLedgeStepUpParams : public FLedgeClimbParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval mStepUpSpeedSpeeds;
    
    HELIOS_API FLedgeStepUpParams();
};

