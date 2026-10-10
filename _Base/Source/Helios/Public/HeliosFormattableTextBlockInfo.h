#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "EHeliosFormatParameter.h"
#include "HeliosFormattableTextBlockInfo.generated.h"

USTRUCT(BlueprintType)
struct FHeliosFormattableTextBlockInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHeliosFormatParameter ParameterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TextureName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
    HELIOS_API FHeliosFormattableTextBlockInfo();
};

