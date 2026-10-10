#pragma once
#include "CoreMinimal.h"
#include "PuzzlePieceOnPieceActionSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPuzzlePieceOnPieceActionSignature, bool, IsPlayer, bool, isPlaypal);

