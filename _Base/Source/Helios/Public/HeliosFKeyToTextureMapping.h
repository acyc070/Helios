#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "HeliosFKeyToTextureMapping.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct HELIOS_API FHeliosFKeyToTextureMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Texture;
    
    FHeliosFKeyToTextureMapping();
};

