#pragma once
#include "CoreMinimal.h"
#include "EGrabRequestState.generated.h"

UENUM()
enum class EGrabRequestState : uint8 {
    Trying,
    Released,
    Unchanged,
};

