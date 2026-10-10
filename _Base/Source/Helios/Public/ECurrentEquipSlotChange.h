#pragma once
#include "CoreMinimal.h"
#include "ECurrentEquipSlotChange.generated.h"

UENUM()
enum class ECurrentEquipSlotChange {
    Drop,
    Equip,
    Unequip,
};

