#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LedgeClimbParamsBase.h"
#include "LedgeClimbParams.generated.h"

USTRUCT(BlueprintType)
struct FLedgeClimbParams : public FLedgeClimbParamsBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval mLedgeHeightRange;
    
    HELIOS_API FLedgeClimbParams();
};

