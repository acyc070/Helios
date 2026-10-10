#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KosmosIKLookAtLimits.generated.h"

USTRUCT(BlueprintType)
struct KOSMOSIK_API FKosmosIKLookAtLimits {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator Max;
    
    FKosmosIKLookAtLimits();
};

