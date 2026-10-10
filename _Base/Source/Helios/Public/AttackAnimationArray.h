#pragma once
#include "CoreMinimal.h"
#include "AttackAnimation.h"
#include "AttackAnimationArray.generated.h"

USTRUCT(BlueprintType)
struct HELIOS_API FAttackAnimationArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAttackAnimation> AttackAnimationArray;
    
    FAttackAnimationArray();
};

