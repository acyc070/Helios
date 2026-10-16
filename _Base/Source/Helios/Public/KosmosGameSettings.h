#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KosmosGameSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class HELIOS_API UKosmosGameSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> LevelNames;
    
public:
    UKosmosGameSettings();

};

