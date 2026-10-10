#pragma once
#include "CoreMinimal.h"
#include "TVEventOriginTargetSignatureDelegate.generated.h"

class AControlledPawn;
class APuzzleTVActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FTVEventOriginTargetSignature, APuzzleTVActor*, thisTV, APuzzleTVActor*, otherTV, AControlledPawn*, ControlledPawn);

