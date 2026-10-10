#pragma once
#include "CoreMinimal.h"
#include "PuzzlePieceOnInterpolationCompletedSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPuzzlePieceOnInterpolationCompletedSignature, float, finalProgress);

