#pragma once
#include "CoreMinimal.h"
#include "ReachParameters.generated.h"

USTRUCT(BlueprintType)
struct FReachParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mPositionTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mAngleTolerance;
    
    HELIOS_API FReachParameters();
};

