#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MaterialManagerProjectSettings.generated.h"

class UMaterialParameterCollection;

UCLASS(Blueprintable, Config=Game)
class HELIOS_API UMaterialManagerProjectSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialParameterCollection> mGlobalMaterialParameterCollection;
    
    UMaterialManagerProjectSettings();

};

