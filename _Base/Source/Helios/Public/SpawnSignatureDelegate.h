#pragma once
#include "CoreMinimal.h"
#include "SpawnSignatureDelegate.generated.h"

class AAISpawner;
class AControlledPawn;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSpawnSignature, AAISpawner*, Spawner, AControlledPawn*, NewPawn);

