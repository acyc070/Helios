#pragma once
#include "CoreMinimal.h"
#include "GenericGestureEvent.h"
#include "PawnGestureWEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPawnGestureWEvent, const FGenericGestureEvent&, PawnEvent, float, EventDistance);

