#pragma once
#include "CoreMinimal.h"
#include "ImpactEventDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FImpactEvent, float, impactForce, AActor*, otherCollider);

