#pragma once
#include "CoreMinimal.h"
#include "FlowControlAnimNotifyData.h"
#include "AnimNotifySignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAnimNotifySignature, const FFlowControlAnimNotifyData&, notifyData);

