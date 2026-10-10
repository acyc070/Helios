#pragma once
#include "CoreMinimal.h"
#include "EPuzzlePieceActions.generated.h"

UENUM()
enum class EPuzzlePieceActions {
    Action_None,
    Action_Push,
    Action_Pull,
    Action_Hold,
    Action_Climb,
    Action_CrankCW,
    Action_CrankCCW,
    Action_LeverLeft,
    Action_LeverRight,
    Action_LeverBoth,
};

