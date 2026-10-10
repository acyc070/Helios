#pragma once
#include "CoreMinimal.h"
#include "StringReferenceSMG.generated.h"

USTRUCT(BlueprintType)
struct HELIOS_API FStringReferenceSMG {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    FStringReferenceSMG();
};

