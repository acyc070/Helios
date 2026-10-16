#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "InputTypeToTextureConfigMapping.h"
#include "InputTexturesProjectSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class HELIOS_API UInputTexturesProjectSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputTypeToTextureConfigMapping> InputTexturesList;
    
    UInputTexturesProjectSettings();

};

