#pragma once
#include "CoreMinimal.h"
#include "TarAnimListenerSignatureDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTarAnimListenerSignature, AActor*, Actor);

