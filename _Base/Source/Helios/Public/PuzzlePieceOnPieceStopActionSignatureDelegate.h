#pragma once
#include "CoreMinimal.h"
#include "PuzzlePieceOnPieceStopActionSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPuzzlePieceOnPieceStopActionSignature, bool, IsPlayer, bool, isPlaypal);

