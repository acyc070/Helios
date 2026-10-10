#pragma once
#include "CoreMinimal.h"
#include "EPuzzlePieceConditionOperators.generated.h"

UENUM()
enum class EPuzzlePieceConditionOperators : uint8 {
    Progress_Bigger,
    Progress_BiggerOrEqual,
    Progress_Smaller,
    Progress_SmallerOrEqual,
    Progress_Equal,
    Progress_NotEqual,
    Piece_Activated,
    Piece_Deactivated,
    Piece_UsedPlayer,
    Piece_UsedPlaypal,
    Piece_ReachEnd,
    Piece_ReachBegining,
    Time_LastUsedByPlayer_Bigger,
    Time_LastUsedByPlaypal_Bigger,
};

