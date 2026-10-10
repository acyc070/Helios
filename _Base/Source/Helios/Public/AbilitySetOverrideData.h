#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AbilitySetOverride.h"
#include "AbilitySetOverrideData.generated.h"

UCLASS(Blueprintable)
class UAbilitySetOverrideData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbilitySetOverride mOverride;
    
public:
    UAbilitySetOverrideData();

};

