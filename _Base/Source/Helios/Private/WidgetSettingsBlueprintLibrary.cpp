#include "WidgetSettingsBlueprintLibrary.h"

UWidgetSettingsBlueprintLibrary::UWidgetSettingsBlueprintLibrary() {
}

FWidgetAudioAssets UWidgetSettingsBlueprintLibrary::GetWidgetAudioAssets() {
    return FWidgetAudioAssets{};
}

int32 UWidgetSettingsBlueprintLibrary::GetNumberOfSaveSlots() {
    return 0;
}

TArray<FLevelUIData> UWidgetSettingsBlueprintLibrary::GetLevelUIData() {
    return TArray<FLevelUIData>();
}


