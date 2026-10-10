#pragma once
#include "CoreMinimal.h"
#include "EMovementControllerPriority.generated.h"

UENUM()
enum class EMovementControllerPriority {
    PhysicalReaction,
    AnimationOverride,
    Animation,
    Transition,
    Pickups,
    Locomotion,
    Climbing,
    Dragging,
    Jumping,
    Sliding,
    Balancing,
    Sneaking,
    Sprinting,
    LatentAction,
    Irrelevant,
};

