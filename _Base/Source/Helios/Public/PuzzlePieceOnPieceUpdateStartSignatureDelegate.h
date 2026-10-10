#pragma once
#include "CoreMinimal.h"
#include "PuzzlePieceOnPieceUpdateStartSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPuzzlePieceOnPieceUpdateStartSignature, float, currentProgress);

