#pragma once
#include "CoreMinimal.h"
#include "SmoothTeleportCompletedDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSmoothTeleportCompleted, AActor*, Actor);

