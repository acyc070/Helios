#pragma once
#include "CoreMinimal.h"
#include "TVEventSignatureDelegate.generated.h"

class AControlledPawn;
class APuzzleTVActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTVEventSignature, APuzzleTVActor*, thisTV, AControlledPawn*, ControlledPawn);

