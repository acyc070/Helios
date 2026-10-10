#pragma once
#include "CoreMinimal.h"
#include "AbilitySetOverride.h"
#include "LocomotionFallHelper.generated.h"

USTRUCT(BlueprintType)
struct FLocomotionFallHelper {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float mFallLimits[5];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbilitySetOverride mFallingOverride;
    
public:
    HELIOS_API FLocomotionFallHelper();
};

