#pragma once
#include "CoreMinimal.h"
#include "HeliosFloatInterval.h"
#include "AttackAnimation.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct HELIOS_API FAttackAnimation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRotateTowardsTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseTwoBoneIK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHeliosFloatInterval TimeInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* Animation;
    
    FAttackAnimation();
};

