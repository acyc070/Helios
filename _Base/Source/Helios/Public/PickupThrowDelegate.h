#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PickupThrowDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPickupThrow, AActor*, Holder, FVector, Velocity);

