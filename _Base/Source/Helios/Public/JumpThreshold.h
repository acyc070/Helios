#pragma once
#include "CoreMinimal.h"
#include "ProjectileParameters.h"
#include "JumpThreshold.generated.h"

USTRUCT(BlueprintType)
struct HELIOS_API FJumpThreshold {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProjectileParameters mJumpParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mThreshold;
    
    FJumpThreshold();
};

