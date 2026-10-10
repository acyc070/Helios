#pragma once
#include "CoreMinimal.h"
#include "TVRemoteEventSignatureDelegate.generated.h"

class APuzzleTVActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTVRemoteEventSignature, APuzzleTVActor*, thisTV);

