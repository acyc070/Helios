#include "HeliosGameUserSettings.h"

UHeliosGameUserSettings::UHeliosGameUserSettings() {
}

void UHeliosGameUserSettings::SetTimesGameCompleted(int32 TimesGameCompleted) {
}

void UHeliosGameUserSettings::SetOptionsLanguage(const FString& Language) {
}

void UHeliosGameUserSettings::SetMasterAudioVolume(float volumeValue) {
}

void UHeliosGameUserSettings::SetLastUsedSaveSlotIndex(int32 Index) {
}

void UHeliosGameUserSettings::SetHasRegisteredDefaultKeyMappings(bool HasRegistered) {
}

void UHeliosGameUserSettings::SetHasAcceptedEULAnPP(bool acceptEULAnPP) {
}

void UHeliosGameUserSettings::SetGamma(float Gamma) {
}

void UHeliosGameUserSettings::SetGameQualityMode(EGameQualityMode inValue) {
}

void UHeliosGameUserSettings::SetEquippedMaskUniqueId(const FName& UniqueId) {
}

void UHeliosGameUserSettings::SetDefaultSettings(bool SaveChanges) {
}

void UHeliosGameUserSettings::SetCurrentKeyMappingsAsDefault() {
}

void UHeliosGameUserSettings::SaveUserSettings() {
}

void UHeliosGameUserSettings::SaveKeyMappings() {
}

void UHeliosGameUserSettings::ResetToDefaultKeyMappings() {
}

void UHeliosGameUserSettings::LoadUserSettings() {
}

void UHeliosGameUserSettings::LoadKeyMappings() {
}

bool UHeliosGameUserSettings::HasRegisteredDefaultKeyMappings() {
    return false;
}

bool UHeliosGameUserSettings::HasAppliedFirstTimeDefaultSettings() const {
    return false;
}

bool UHeliosGameUserSettings::HasAcceptedEULAnPP() {
    return false;
}

float UHeliosGameUserSettings::GetUserSavedGamma() {
    return 0.0f;
}

int32 UHeliosGameUserSettings::GetTimesGameCompleted() {
    return 0;
}

float UHeliosGameUserSettings::GetMasterAudioVolume() {
    return 0.0f;
}

int32 UHeliosGameUserSettings::GetLastUsedSaveSlotIndex() const {
    return 0;
}

EGameQualityMode UHeliosGameUserSettings::GetGameQualityMode() const {
    return EGameQualityMode::Beauty;
}

FName UHeliosGameUserSettings::GetEquippedMaskUniqueId() const {
    return NAME_None;
}

float UHeliosGameUserSettings::GetEngineGamma() {
    return 0.0f;
}

void UHeliosGameUserSettings::ApplyKeyMapGroupings() {
}


