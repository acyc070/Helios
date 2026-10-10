#pragma once
#include "CoreMinimal.h"
#include "PuzzlePieceOnPieceUpdateSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPuzzlePieceOnPieceUpdateSignature, float, deltaProgress, float, currentProgress);

