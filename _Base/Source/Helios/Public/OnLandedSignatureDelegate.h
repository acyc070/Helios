#pragma once
#include "CoreMinimal.h"
#include "FallData.h"
#include "OnLandedSignatureDelegate.generated.h"

class AControlledPawn;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLandedSignature, AControlledPawn*, Pawn, const FFallData&, FallData);

