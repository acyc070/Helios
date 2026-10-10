#pragma once
#include "CoreMinimal.h"
#include "EAttachPoint.h"
#include "GrabbedActorEventDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGrabbedActorEvent, EAttachPoint, attachPoint, AActor*, Target);

