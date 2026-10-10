#pragma once
#include "CoreMinimal.h"
#include "TarSubstepSkeletalMeshStepCompletedSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTarSubstepSkeletalMeshStepCompletedSignature, float, stepTime);

