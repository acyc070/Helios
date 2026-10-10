#pragma once
#include "CoreMinimal.h"
#include "PawnStateEvent.h"
#include "PawnWEventDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPawnWEventDelegate, const FPawnStateEvent&, PawnEvent, float, EventDistance);

