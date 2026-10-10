#pragma once
#include "CoreMinimal.h"
#include "GenericWorldEvent.h"
#include "WorldEventDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWorldEventDelegate, const FGenericWorldEvent&, GenericEvent, float, EventDistance);

