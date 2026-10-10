#pragma once
#include "CoreMinimal.h"
#include "PuzzlePieceOnPieceUpdateEndSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPuzzlePieceOnPieceUpdateEndSignature, float, currentProgress);

