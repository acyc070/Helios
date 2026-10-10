#pragma once
#include "CoreMinimal.h"
#include "PickupDelegateWithPickupRefDelegate.generated.h"

class AActor;
class UPickupComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPickupDelegateWithPickupRef, AActor*, Holder, UPickupComponent*, PickupComponent);

