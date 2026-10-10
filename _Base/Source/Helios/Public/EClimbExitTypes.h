#pragma once
#include "CoreMinimal.h"
#include "EClimbExitTypes.generated.h"

UENUM()
enum class EClimbExitTypes : uint8 {
    ClimDownToGround,
    ClimpUpOnObject,
    JumpOff,
    JumpOffTurnRight,
    JumpOffTurnLeft,
    ReleaseGrab,
};

