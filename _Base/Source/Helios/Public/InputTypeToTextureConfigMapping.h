#pragma once
#include "CoreMinimal.h"
#include "EHeliosInputType.h"
#include "InputTypeToTextureConfigMapping.generated.h"

class UHeliosInputTexturesConfig;

USTRUCT(BlueprintType)
struct HELIOS_API FInputTypeToTextureConfigMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHeliosInputType InputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHeliosInputTexturesConfig* TextureConfig;
    
    FInputTypeToTextureConfigMapping();
};

