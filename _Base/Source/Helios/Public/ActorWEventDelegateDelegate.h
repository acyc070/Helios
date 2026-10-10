#pragma once
#include "CoreMinimal.h"
#include "GenericActorEvent.h"
#include "ActorWEventDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FActorWEventDelegate, const FGenericActorEvent&, ActorEvent, float, EventDistance);

