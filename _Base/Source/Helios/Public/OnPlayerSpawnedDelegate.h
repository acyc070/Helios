#pragma once
#include "CoreMinimal.h"
#include "OnPlayerSpawnedDelegate.generated.h"

class AControlledPawn;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FOnPlayerSpawned, AControlledPawn*, PlayerPawn);

