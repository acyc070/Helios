#pragma once
#include "CoreMinimal.h"
#include "NavlinkAnticipateTraversalDelegateDelegate.generated.h"

class APawn;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FNavlinkAnticipateTraversalDelegate, APawn*, Pawn, float, DistanceToNavlink);

