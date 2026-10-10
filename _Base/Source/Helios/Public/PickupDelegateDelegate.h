#pragma once
#include "CoreMinimal.h"
#include "PickupDelegateDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPickupDelegate, AActor*, Holder);

