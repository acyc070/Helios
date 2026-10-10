#pragma once
#include "CoreMinimal.h"
#include "EEquipSlots.generated.h"

UENUM()
enum class EEquipSlots : uint8 {
    None,
    Flashlight,
    FlashlightTransmission,
    Remote,
    Slingshot,
    Count,
};

