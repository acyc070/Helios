#pragma once
#include "CoreMinimal.h"
#include "FlowControlPostProcessAnimNotifiesData.h"
#include "PostProcessAnimNotifiesDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPostProcessAnimNotifies, const FFlowControlPostProcessAnimNotifiesData&, notifyData);

