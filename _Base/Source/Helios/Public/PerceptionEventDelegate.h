#pragma once
#include "CoreMinimal.h"
#include "SharedDetectedObject.h"
#include "PerceptionEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPerceptionEvent, FSharedDetectedObject, DetectedObject);

