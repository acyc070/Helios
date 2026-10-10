#pragma once
#include "CoreMinimal.h"
#include "EDiscoveryState.generated.h"

UENUM()
enum class EDiscoveryState : uint8 {
    NotDiscovered,
    UserUnknown,
    Detected,
    LoggedOut,
};

