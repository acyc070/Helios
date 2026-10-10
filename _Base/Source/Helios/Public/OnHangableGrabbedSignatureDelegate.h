#pragma once
#include "CoreMinimal.h"
#include "OnHangableGrabbedSignatureDelegate.generated.h"

class UBaseGrabberInterface;
class UHangableComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHangableGrabbedSignature, UHangableComponent*, hangable, const UBaseGrabberInterface*, grabber);

