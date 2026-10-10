#pragma once
#include "CoreMinimal.h"
#include "EVolumeAABB2DSide.generated.h"

UENUM()
enum class EVolumeAABB2DSide {
    AABB2D_Side_Left,
    AABB2D_Side_Right,
    AABB2D_Side_Bottom,
    AABB2D_Side_Top,
};

