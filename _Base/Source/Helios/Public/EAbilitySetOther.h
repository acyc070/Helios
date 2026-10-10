#pragma once
#include "CoreMinimal.h"
#include "EAbilitySetOther.generated.h"

UENUM()
enum class EAbilitySetOther : uint8 {
    Balance,
    Strafe,
    WalkStart,
    WalkStop,
    TurnOnSpot,
    QuickTurn,
    QuickTurnSprint,
    SmoothTurning,
    HeavyWeaponMovement,
    SprintLean,
    FootIK,
    Idling,
    Repulsion,
    Gesture,
    Stumble,
    ReactToSuddenSounds,
    FullbodyIK,
    StumbleOnObjects,
    SprintPrepare,
    GrabPrepare,
    HandHoldingLeftHand,
    HandHoldingRightHand,
    MAX,
};

