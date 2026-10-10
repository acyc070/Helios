#pragma once
#include "CoreMinimal.h"
#include "EIKTeacherNeckState.generated.h"

UENUM()
enum class EIKTeacherNeckState : uint8 {
    Idle,
    StartAttack,
    Attacking,
    Holding,
    Biting,
    Retracting,
};

