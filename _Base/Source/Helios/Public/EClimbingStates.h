#pragma once
#include "CoreMinimal.h"
#include "EClimbingStates.generated.h"

UENUM()
enum class EClimbingStates {
    NotClimbing,
    Transition,
    EnterClimbing,
    Climbing,
    ExitClimbing,
};

