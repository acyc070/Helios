#pragma once
#include "CoreMinimal.h"
#include "PlayerPickupDelegateDelegate.generated.h"

class UPickupComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerPickupDelegate, const UPickupComponent*, Pickup);

