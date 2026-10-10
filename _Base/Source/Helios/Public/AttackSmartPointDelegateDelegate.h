#pragma once
#include "CoreMinimal.h"
#include "AttackSmartPointDelegateDelegate.generated.h"

class APawn;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAttackSmartPointDelegate, APawn*, Pawn);

