#include "SettingsPreset.h"

USettingsPreset::USettingsPreset() {
    this->LanguageAndLocale = TEXT("en");
    this->MasterVolume = 1.00f;
    this->windowMode = EWindowMode::WindowedFullscreen;
    this->VSync = false;
    this->GraphicsQualityPreset = ETarsierPresetGraphicsQualityLevel::High;
    this->Gamma = 2.20f;
}


