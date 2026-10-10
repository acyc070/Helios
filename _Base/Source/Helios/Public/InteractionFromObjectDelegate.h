#pragma once
#include "CoreMinimal.h"
#include "InteractionFromObjectDelegate.generated.h"

class AActor;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInteractionFromObject, AActor*, Interactor);