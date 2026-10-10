#pragma once
#include "CoreMinimal.h"
#include "EPlayerInventoryItemData.generated.h"

UENUM()
enum class EPlayerInventoryItemData : uint8 {
    None,
    Idle,
    Explore,
    CombatIdle,
    Strafe,
    InAir,
};

