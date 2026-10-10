#pragma once
#include "CoreMinimal.h"
#include "MoveFailedDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FMoveFailedDelegate, float, FailDuration, int32, FailCounter);

