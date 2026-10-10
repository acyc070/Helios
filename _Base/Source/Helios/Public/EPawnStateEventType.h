#pragma once
#include "CoreMinimal.h"
#include "EPawnStateEventType.generated.h"

UENUM()
enum class EPawnStateEventType : uint8 {
    Unspecified,
    Spawn,
    Possessed,
    CriticalDamage,
    Death,
    Teleport,
    DebugTeleport,
    WalkStart,
    WalkStop,
    TurnOnSpot,
    Stumble,
    Quickturn,
    Jump,
    Land,
    Sneak,
    Sprint,
    SlideEnd,
    SlideStart,
    BalanceStart,
    BalanceEnd,
    PickedUpObject,
    PutDownObject,
    ThrewObject,
    PlaypalReactToPlayerDead,
    MAX,
};

