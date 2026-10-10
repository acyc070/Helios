#pragma once
#include "CoreMinimal.h"
#include "ELeechBehaviourState.h"
#include "OnChangedLeechStateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangedLeechState, ELeechBehaviourState, NewLeechState);

