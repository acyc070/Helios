#pragma once
#include "CoreMinimal.h"
#include "EGrabState.h"
#include "GrabStateChangeDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGrabStateChange, EGrabState, grabState);

