#pragma once
#include "CoreMinimal.h"
#include "CharacterAnimStateVariation.generated.h"

USTRUCT(BlueprintType)
struct HELIOS_API FCharacterAnimStateVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VariationWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VariationCooldown;
    
    FCharacterAnimStateVariation();
};

