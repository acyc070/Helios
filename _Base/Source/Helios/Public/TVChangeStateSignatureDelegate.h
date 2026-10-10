#pragma once
#include "CoreMinimal.h"
#include "ETVState.h"
#include "TVChangeStateSignatureDelegate.generated.h"

class APuzzleTVActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FTVChangeStateSignature, APuzzleTVActor*, thisTV, ETVState, currentTVState, ETVState, previousTVState);

