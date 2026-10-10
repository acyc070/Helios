#pragma once
#include "CoreMinimal.h"
#include "EWalkStartType.generated.h"

UENUM()
enum class EWalkStartType : uint8 {
    None,
    WalkStart,
    TurnOnSpot,
    QuickTurn,
    QuickTurnSprint,
    StaticTurn,
    LedgeFallOff,
    Stumble,
};

