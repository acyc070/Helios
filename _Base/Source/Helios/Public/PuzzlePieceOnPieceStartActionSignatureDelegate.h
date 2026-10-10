#pragma once
#include "CoreMinimal.h"
#include "PuzzlePieceOnPieceStartActionSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPuzzlePieceOnPieceStartActionSignature, bool, IsPlayer, bool, isPlaypal);

