#pragma once
#include "CoreMinimal.h"
#include "EAbilitySetPickup.generated.h"

UENUM()
enum class EAbilitySetPickup : uint8 {
    EquipItem,
    UseCurrentItem,
    ThrowItem,
    PutDown,
    UseItemFromInventory,
    MAX,
};

