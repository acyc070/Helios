#pragma once
#include "CoreMinimal.h"
#include "EVolumeSide.generated.h"

UENUM()
enum class EVolumeSide {
    Vol_Side_Front,
    Vol_Side_Back,
    Vol_Side_Left,
    Vol_Side_Right,
    Vol_Side_Bottom,
    Vol_Side_Top,
};

