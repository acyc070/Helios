#pragma once
#include "CoreMinimal.h"
#include "EAttackType.generated.h"

UENUM()
enum class EAttackType : uint8 {
    Normal,
    DEPRECATED_SneakKill,
    DEPRECATED_Struggle,
};

