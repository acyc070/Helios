#pragma once
#include "CoreMinimal.h"
#include "EAudioVolumeGroupEventType.generated.h"

UENUM()
enum class EAudioVolumeGroupEventType : uint8 {
    Enter,
    Exit,
};

