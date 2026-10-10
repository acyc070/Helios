#pragma once
#include "CoreMinimal.h"
#include "TarNamedAnimNotifySignatureDelegate.generated.h"

class AActor;
class UAnimMetaData;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FTarNamedAnimNotifySignature, AActor*, Actor, const FName&, NotifyName, const TArray<UAnimMetaData*>&, AnimMetaData);

