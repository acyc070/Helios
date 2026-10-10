#pragma once
#include "CoreMinimal.h"
#include "EGrabChangeType.h"
#include "ELimb.h"
#include "GrabChangedSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGrabChangedSignature, TEnumAsByte<ELimb>, limb, TEnumAsByte<EGrabChangeType>, changeType);

