#pragma once
#include "CoreMinimal.h"
#include "GrabEvent.h"
#include "GrabEventDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGrabEventDelegate, const FGrabEvent&, GrabEvent);

