#pragma once
#include "CoreMinimal.h"
#include "EAttackState.generated.h"

UENUM()
enum class EAttackState : uint8 {
    WaitingForInput,
    ShouldDoFirstAttack,
    ShouldDoFollowOnAttack,
    IsNormalAttacking,
    DEPRECATED_IsInStruggleStart,
    DEPRECATED_IsStruggling,
    DEPRECATED_IsInSneakAttackStart,
    DEPRECATED_IsSneakKilling,
};

