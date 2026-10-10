#include "RoomVolumeControllerBlueprintLibrary.h"

URoomVolumeControllerBlueprintLibrary::URoomVolumeControllerBlueprintLibrary() {
}

FVector URoomVolumeControllerBlueprintLibrary::GetRoomVolumeCustomValueVector(UObject* WorldContextObject, FName valueName) {
    return FVector{};
}

float URoomVolumeControllerBlueprintLibrary::GetRoomVolumeCustomValueFloat(UObject* WorldContextObject, FName valueName) {
    return 0.0f;
}

void URoomVolumeControllerBlueprintLibrary::ForceUpdateRoomVolume(UObject* WorldContextObject) {
}


