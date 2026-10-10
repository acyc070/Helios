#pragma once
#include "CoreMinimal.h"
#include "EMaskLockState.generated.h"

UENUM()
enum class EMaskLockState : uint8 {
    Locked,
    Unlocked,
};

