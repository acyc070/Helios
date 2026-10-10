#pragma once
#include "CoreMinimal.h"
#include "EHeliosInputScheme.h"
#include "EHeliosInputType.h"
#include "ImageSetScheme.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct HELIOS_API FImageSetScheme {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHeliosInputType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHeliosInputScheme scheme;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* data;
    
    FImageSetScheme();
};

