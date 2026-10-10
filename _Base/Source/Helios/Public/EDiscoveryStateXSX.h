#pragma once
#include "CoreMinimal.h"
#include "EDiscoveryStateXSX.generated.h"

UENUM()
enum class EDiscoveryStateXSX {
    NotDiscovered,
    UserUnknown,
    Detected,
    LoggedOut,
    ShowingLoginUI,
    LoggingIn,
    ClosedLoginUIWithoutLogin,
};

