#pragma once
#include "CoreMinimal.h"
#include "EAIScriptedOrderType.generated.h"

UENUM()
enum class EAIScriptedOrderType {
    Invalid,
    Wait,
    Move,
    Animate,
    Look,
    SmartPoint,
    PuzzlePiece,
    Control,
    InteractiveState,
    LocomotionMode,
    ClearDetection,
    Canimation,
    Blendspace,
    AnimationState,
    Item,
    Blueprint,
};

