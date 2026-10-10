#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EGrabChangeType.h"
#include "ELimb.h"
#include "GrabHelperChangedSignatureDelegate.generated.h"

class AActor;
class UClimbableComponent;
class UGrabHelper;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FGrabHelperChangedSignature, UClimbableComponent*, climbable, AActor*, grabber, UGrabHelper*, GrabHelper, const FTransform&, Transform, TEnumAsByte<ELimb>, limb, TEnumAsByte<EGrabChangeType>, changeType);

