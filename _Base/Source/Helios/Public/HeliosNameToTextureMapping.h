#pragma once
#include "CoreMinimal.h"
#include "HeliosNameToTextureMapping.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct HELIOS_API FHeliosNameToTextureMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Texture;
    
    FHeliosNameToTextureMapping();
};

