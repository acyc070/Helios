#pragma once
#include "CoreMinimal.h"
#include "EBedLiftingSide.generated.h"

UENUM()
enum class EBedLiftingSide : uint8 {
    BL_Side_None,
    BL_Side_Top,
    BL_Side_Bottom,
    BL_Side_Left,
    BL_Side_Right,
    BL_Side_Custom1,
    BL_Side_Custom2,
    BL_Side_Custom3,
    BL_Side_Custom4,
};

