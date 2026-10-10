#pragma once
#include "CoreMinimal.h"
#include "EAbilitySetGrab.generated.h"

UENUM()
enum class EAbilitySetGrab : uint8 {
    GrabClimb,
    GrabDrag,
    GrabItemFromGround,
    GrabLever,
    GrabHandholding,
    GrabRelease,
    MAX,
};

