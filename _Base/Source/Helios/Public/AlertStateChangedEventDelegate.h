#pragma once
#include "CoreMinimal.h"
#include "EAIAlertState.h"
#include "AlertStateChangedEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAlertStateChangedEvent, EAIAlertState, currentState, EAIAlertState, previousState);

