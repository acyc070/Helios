#pragma once
#include "CoreMinimal.h"
#include "PlayerStartEventDelegate.generated.h"

class AControlledPawn;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerStartEvent, AControlledPawn*, PlayerPawn);

