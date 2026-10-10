#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "ECultureEnum.h"
#include "LocalizationHelpers.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class HELIOS_API ULocalizationHelpers : public UObject {
    GENERATED_BODY()
public:
    ULocalizationHelpers();

    UFUNCTION(BlueprintPure)
    static ECultureEnum UnrealCultureCodeToEnum(const FString& unrealCode);
    
    UFUNCTION(BlueprintPure)
    static bool IsCurrentCultureRTL();
    
    UFUNCTION(BlueprintPure)
    static FText GetLocalizedLevelName(FName LevelName);
    
    UFUNCTION(BlueprintPure)
    static FText GetLocalizedLanguageNameFromCultureEnum(ECultureEnum Culture);
    
    UFUNCTION(BlueprintPure)
    static UDataTable* GetLocalizationConfigTable();
    
    UFUNCTION(BlueprintPure)
    static FText GetDateTimeAsText(const FDateTime& DateTime, const FString& dateTimeFormat);
    
    UFUNCTION(BlueprintPure)
    static ECultureEnum GetCurrentCultureAsEnum();
    
    UFUNCTION(BlueprintPure)
    static FString CultureEnumToUnrealCulture(ECultureEnum cultureEnum);
    
};

