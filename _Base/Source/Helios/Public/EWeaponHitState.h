#pragma once
#include "CoreMinimal.h"
#include "EWeaponHitState.generated.h"

UENUM()
enum class EWeaponHitState : uint8 {
    Hit,
    HitBounce,
    HitGround,
    NoHit,
};

