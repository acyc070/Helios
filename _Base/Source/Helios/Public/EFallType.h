#pragma once
#include "CoreMinimal.h"
#include "EFallType.generated.h"

UENUM()
enum class EFallType : uint8 {
    Light,
    Medium,
    Heavy,
    Concussive,
    Death,
    MAX,
};

