#pragma once
#include "CoreMinimal.h"
#include "GestureTriggerSignatureDelegate.generated.h"

class AGestureOverrideVolume;
class UGestureInterface;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGestureTriggerSignature, AGestureOverrideVolume*, Volume, UGestureInterface*, GestureInterface);

