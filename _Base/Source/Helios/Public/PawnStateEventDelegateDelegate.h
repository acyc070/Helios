#pragma once
#include "CoreMinimal.h"
#include "PawnStateEvent.h"
#include "PawnStateEventDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPawnStateEventDelegate, const FPawnStateEvent&, PawnStateEvent);

