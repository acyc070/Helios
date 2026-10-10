#pragma once
#include "CoreMinimal.h"
#include "EPickupHoldStyle.generated.h"

UENUM()
enum class EPickupHoldStyle : uint8 {
    Light,
    Heavy,
    OneHanded,
    Weapon,
};

