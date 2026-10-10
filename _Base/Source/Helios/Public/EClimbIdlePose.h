#pragma once
#include "CoreMinimal.h"
#include "EClimbIdlePose.generated.h"

UENUM()
enum class EClimbIdlePose : uint8 {
    None,
    LeftHand,
    RightHand,
    BothHands,
};

