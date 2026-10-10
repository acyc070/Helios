#pragma once
#include "CoreMinimal.h"
#include "EDangerType.generated.h"

UENUM()
enum class EDangerType : uint8 {
    Unspecified,
    Generic,
    WeaponAttackStart,
    MAX,
};

