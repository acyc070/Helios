#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AbilitySet.h"
#include "AbilitySetData.generated.h"

UCLASS(Blueprintable)
class UAbilitySetData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbilitySet mAbilitySet;
    
public:
    UAbilitySetData();

};

