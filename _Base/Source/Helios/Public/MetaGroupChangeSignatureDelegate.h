#pragma once
#include "CoreMinimal.h"
#include "MetaGroupChangeSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMetaGroupChangeSignature, bool, ActivationState);

