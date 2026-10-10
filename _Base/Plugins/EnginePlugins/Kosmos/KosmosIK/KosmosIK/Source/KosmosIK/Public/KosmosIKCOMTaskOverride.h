#pragma once
#include "CoreMinimal.h"
#include "KosmosIKCOMTaskOverride.generated.h"

USTRUCT(BlueprintType)
struct KOSMOSIK_API FKosmosIKCOMTaskOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowAsPin;
    
    FKosmosIKCOMTaskOverride();
};

