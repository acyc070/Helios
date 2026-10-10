#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TarInputKeyMappingBase.h"
#include "KeyActionDescriptions.h"
#include "HeliosKeyMapSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class HELIOS_API UHeliosKeyMapSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTarInputKeyMappingBase> KeyMapGroupings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKeyActionDescriptions> RichTextTagsMappingToKeys;
    
    UHeliosKeyMapSettings();

};

