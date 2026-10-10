#include "TarGameUserSettings.h"
#include "TarInputKeyMapper.h"

UTarGameUserSettings::UTarGameUserSettings() {
    this->AntiAliasingQuality = ETarsierGraphicsQualityLevel::High;
    this->BloomQuality = ETarsierGraphicsQualityLevel::High;
    this->PostProcessingQuality = ETarsierGraphicsQualityLevel::High;
    this->ShadowQuality = ETarsierGraphicsQualityLevel::High;
    this->TextureQuality = ETarsierGraphicsQualityLevel::High;
    this->EffectsQuality = ETarsierGraphicsQualityLevel::High;
    this->AmbientOcclusionQuality = ETarsierGraphicsQualityLevel::High;
    this->DepthOfFieldQuality = ETarsierGraphicsQualityLevel::High;
    this->RayTracingQuality = ETarsierGraphicsQualityLevel::High;
    this->PCFirstTimeLaunch = false;
    this->KeyMapper = CreateDefaultSubobject<UTarInputKeyMapper>(TEXT("KeyMapper"));
    this->SelectedDisplay = 0;
}

FIntPoint UTarGameUserSettings::StringToResolution(const FString& resolutionString) {
    return FIntPoint{};
}

void UTarGameUserSettings::SetWindowMode(TEnumAsByte<EWindowMode::Type> windowMode) {
}

void UTarGameUserSettings::SetTarsierTextureQuality(ETarsierGraphicsQualityLevel QualityLevel) {
}

void UTarGameUserSettings::SetTarsierShadowQuality(ETarsierGraphicsQualityLevel QualityLevel) {
}

void UTarGameUserSettings::SetTarsierRayTracingQuality(ETarsierGraphicsQualityLevel QualityLevel) {
}

void UTarGameUserSettings::SetTarsierQualityPreset(ETarsierPresetGraphicsQualityLevel presetLevel) {
}

void UTarGameUserSettings::SetTarsierPostProcessingQuality(ETarsierGraphicsQualityLevel QualityLevel) {
}

void UTarGameUserSettings::SetTarsierEffectsQuality(ETarsierGraphicsQualityLevel QualityLevel) {
}

void UTarGameUserSettings::SetTarsierDepthOfFieldQuality(ETarsierGraphicsQualityLevel QualityLevel) {
}

void UTarGameUserSettings::SetTarsierBloomQuality(ETarsierGraphicsQualityLevel QualityLevel) {
}

void UTarGameUserSettings::SetTarsierAntiAliasingQuality(ETarsierGraphicsQualityLevel QualityLevel) {
}

void UTarGameUserSettings::SetTarsierAmbientOcclusionQuality(ETarsierGraphicsQualityLevel QualityLevel) {
}

void UTarGameUserSettings::SetResolution(int32 Width, int32 Height) {
}

void UTarGameUserSettings::SetDesiredDisplay(int32 displayIndex) {
}

void UTarGameUserSettings::SaveToConfigFile() {
}

FText UTarGameUserSettings::ResolutionToText(int32 resolutionX, int32 resolutionY) {
    return FText::GetEmpty();
}

FString UTarGameUserSettings::ResolutionToString(int32 resolutionX, int32 resolutionY) {
    return TEXT("");
}

bool UTarGameUserSettings::IsRayTracingAvailable() {
    return false;
}

ETarsierGraphicsQualityLevel UTarGameUserSettings::GetTarsierTextureQuality() const {
    return ETarsierGraphicsQualityLevel::Off;
}

ETarsierGraphicsQualityLevel UTarGameUserSettings::GetTarsierShadowQuality() const {
    return ETarsierGraphicsQualityLevel::Off;
}

ETarsierGraphicsQualityLevel UTarGameUserSettings::GetTarsierRayTracingQuality() const {
    return ETarsierGraphicsQualityLevel::Off;
}

ETarsierPresetGraphicsQualityLevel UTarGameUserSettings::GetTarsierQualityPreset() const {
    return ETarsierPresetGraphicsQualityLevel::Low;
}

ETarsierGraphicsQualityLevel UTarGameUserSettings::GetTarsierPostProcessingQuality() const {
    return ETarsierGraphicsQualityLevel::Off;
}

ETarsierGraphicsQualityLevel UTarGameUserSettings::GetTarsierEffectsQuality() const {
    return ETarsierGraphicsQualityLevel::Off;
}

ETarsierGraphicsQualityLevel UTarGameUserSettings::GetTarsierDepthOfFieldQuality() const {
    return ETarsierGraphicsQualityLevel::Off;
}

ETarsierGraphicsQualityLevel UTarGameUserSettings::GetTarsierBloomQuality() const {
    return ETarsierGraphicsQualityLevel::Off;
}

ETarsierGraphicsQualityLevel UTarGameUserSettings::GetTarsierAntiAliasingQuality() const {
    return ETarsierGraphicsQualityLevel::Off;
}

ETarsierGraphicsQualityLevel UTarGameUserSettings::GetTarsierAmbientOcclusionQuality() const {
    return ETarsierGraphicsQualityLevel::Off;
}

bool UTarGameUserSettings::GetSupportedScreenResolutions(TArray<FString>& Resolutions) {
    return false;
}

UTarInputKeyMapper* UTarGameUserSettings::GetKeyMapper() const {
    return NULL;
}

int32 UTarGameUserSettings::GetDesiredDisplay() {
    return 0;
}

bool UTarGameUserSettings::GetAvailableDisplays(TArray<FString>& displays) {
    return false;
}

void UTarGameUserSettings::ApplyVSync() {
}

void UTarGameUserSettings::ApplyScreenSettings() {
}

bool UTarGameUserSettings::ApplyGraphicsSettings() {
    return false;
}

void UTarGameUserSettings::ApplyDisplaySettings() {
}


