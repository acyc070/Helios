#pragma once
#include "CoreMinimal.h"
#include "EDiscoveryStateXbox.generated.h"

UENUM()
enum class EDiscoveryStateXbox {
    NotDiscovered,
    UserUnknown,
    Detected,
    LoggedOut,
    ShowingLoginUI,
    LoggingIn,
};

