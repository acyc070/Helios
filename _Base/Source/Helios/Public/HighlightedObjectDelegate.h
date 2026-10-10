#pragma once
#include "CoreMinimal.h"
#include "HighlightedObjectDelegate.generated.h"

class AActor;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHighlightedObject, AActor*, HighlightedActor);