#include "LocalizationHelpers.h"

ULocalizationHelpers::ULocalizationHelpers() {
}

ECultureEnum ULocalizationHelpers::UnrealCultureCodeToEnum(const FString& unrealCode) {
    return ECultureEnum::English;
}

bool ULocalizationHelpers::IsCurrentCultureRTL() {
    return false;
}

FText ULocalizationHelpers::GetLocalizedLevelName(FName LevelName) {
    return FText::GetEmpty();
}

FText ULocalizationHelpers::GetLocalizedLanguageNameFromCultureEnum(ECultureEnum Culture) {
    return FText::GetEmpty();
}

UDataTable* ULocalizationHelpers::GetLocalizationConfigTable() {
    return NULL;
}

FText ULocalizationHelpers::GetDateTimeAsText(const FDateTime& DateTime, const FString& dateTimeFormat) {
    return FText::GetEmpty();
}

ECultureEnum ULocalizationHelpers::GetCurrentCultureAsEnum() {
    return ECultureEnum::English;
}

FString ULocalizationHelpers::CultureEnumToUnrealCulture(ECultureEnum cultureEnum) {
    return TEXT("");
}


