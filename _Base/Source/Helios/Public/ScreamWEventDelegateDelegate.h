#pragma once
#include "CoreMinimal.h"
#include "ScreamEvent.h"
#include "ScreamWEventDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FScreamWEventDelegate, const FScreamEvent&, ScreamEvent, float, EventDistance);

