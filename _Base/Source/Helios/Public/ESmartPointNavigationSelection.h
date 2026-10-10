#pragma once
#include "CoreMinimal.h"
#include "ESmartPointNavigationSelection.generated.h"

UENUM()
enum class ESmartPointNavigationSelection : uint8 {
    Default,
    UseSmartPointNavigationOptions,
    OverrideSmartPointNavigationOptions,
};

