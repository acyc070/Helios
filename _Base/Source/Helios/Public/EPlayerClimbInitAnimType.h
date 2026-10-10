#pragma once
#include "CoreMinimal.h"
#include "EPlayerClimbInitAnimType.generated.h"

UENUM()
enum class EPlayerClimbInitAnimType : uint8 {
    None,
    FromBottomStanding,
    FromBottomCrouching,
    FromTop,
    FromAirNormal,
    FromAirRising,
    FromAirFalling,
    FromAirFallingFast,
};

