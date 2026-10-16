#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MaskData.h"
#include "MaskProjectSettings.generated.h"

UCLASS(Blueprintable, Config=Game)
class HELIOS_API UMaskProjectSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DefaultMaskUniqueId;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMaskData> Masks;
    
    UMaskProjectSettings();

};

