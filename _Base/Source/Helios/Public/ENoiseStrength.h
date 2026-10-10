#pragma once
#include "CoreMinimal.h"
#include "ENoiseStrength.generated.h"

UENUM()
enum class ENoiseStrength : uint8 {
    Silent,
    Weak,
    Loud,
};

