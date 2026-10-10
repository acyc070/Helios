#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InteractablePPBeingUsedSignatureDelegate.generated.h"

class AControlledPawn;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FInteractablePPBeingUsedSignature, AControlledPawn*, Pawn, FVector, inputFromController, FVector, inputFromCameraView, FVector, inputFromGrabberForward);

