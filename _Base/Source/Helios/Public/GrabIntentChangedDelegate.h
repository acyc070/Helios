#pragma once
#include "CoreMinimal.h"
#include "GrabIntentChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGrabIntentChanged, bool, wantsToGrab);

