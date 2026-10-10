#pragma once
#include "CoreMinimal.h"
#include "EBuildType.generated.h"

UENUM()
enum class EBuildType : uint8 {
    Test,
    Development,
    Shipping,
};

