#pragma once
#include "CoreMinimal.h"
#include "DangerEvent.h"
#include "GenericDangerWEventDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGenericDangerWEventDelegate, const FDangerEvent&, DangerEvent, float, EventDistance);

