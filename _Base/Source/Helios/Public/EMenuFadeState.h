#pragma once
#include "CoreMinimal.h"
#include "EMenuFadeState.generated.h"

UENUM()
enum class EMenuFadeState : uint8 {
    Idle,
    FadingIn,
    FadingOut,
};

