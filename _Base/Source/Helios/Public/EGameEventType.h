#pragma once
#include "CoreMinimal.h"
#include "EGameEventType.generated.h"

UENUM()
enum class EGameEventType : uint8 {
    Generic,
    World,
    Actor,
    Pawn,
    Damage,
    Noise = 100,
    DeadlyScream,
    PawnState = 110,
    PawnInteraction,
    PawnPuzzleInteraction,
    PawnGrab,
    PawnGesture,
    AnimationOverride,
    PawnTouch,
    AIScriptedOrder = 150,
    AIGrabbedActor,
    AIStateFeedback,
    AIReactionFeedback,
    SmartPointProgress,
    SmartVolume,
    NavlinkVolume,
    LightOverlap,
    AIStateChange,
    AIResourceLock,
    AIAttention,
    WeaponEvent = 200,
    Impact,
    GenericDanger,
    WeaponAttackDanger,
    MAX,
};

