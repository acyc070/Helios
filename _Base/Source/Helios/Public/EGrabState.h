#pragma once
#include "CoreMinimal.h"
#include "EGrabState.generated.h"

UENUM()
enum class EGrabState : uint8 {
    Start,
    Success,
    Fail,
    NotActive,
};

