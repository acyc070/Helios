#pragma once
#include "CoreMinimal.h"
#include "CollectibleDelegateDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCollectibleDelegate, AActor*, Collectible);

