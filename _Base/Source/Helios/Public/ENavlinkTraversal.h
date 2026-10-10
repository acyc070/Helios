#pragma once
#include "CoreMinimal.h"
#include "ENavlinkTraversal.generated.h"

UENUM()
enum class ENavlinkTraversal : uint8 {
    Teleport,
    Jump,
    Dropdown,
    Climb,
    WalkThrough,
    Blueprint = 200,
    MAX,
};

