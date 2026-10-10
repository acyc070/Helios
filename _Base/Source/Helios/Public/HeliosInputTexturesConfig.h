#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "InputCoreTypes.h"
#include "EHeliosInputType.h"
#include "HeliosFKeyToTextureMapping.h"
#include "HeliosNameToTextureMapping.h"
#include "HeliosInputTexturesConfig.generated.h"

class UHeliosInputTexturesConfig;
class UTexture2D;

UCLASS(Blueprintable)
class HELIOS_API UHeliosInputTexturesConfig : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHeliosInputType InputType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* DefaultTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHeliosFKeyToTextureMapping> KeyTextures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHeliosNameToTextureMapping> NamedTextures;
    
public:
    UHeliosInputTexturesConfig();

    UFUNCTION(BlueprintPure)
    static UHeliosInputTexturesConfig* GetPlatformSpecificTextureConfig(EHeliosInputType NewInputType);
    
    UFUNCTION(BlueprintPure)
    UTexture2D* GetNamedTexture(const FName& Name) const;
    
    UFUNCTION(BlueprintPure)
    UTexture2D* GetKeyTexture(const FKey& Key) const;
    
};

