#pragma once
#include "CoreMinimal.h"
#include "EAbilitySetJump.generated.h"

UENUM()
enum class EAbilitySetJump : uint8 {
    FromSlide,
    FromClimb,
    FromGround,
    FromHang,
    MAX,
};

