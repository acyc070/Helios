#pragma once
#include "CoreMinimal.h"
#include "EPuzzlePieceConditionOperators.h"
#include "PuzzlePieceEditorDropDown.h"
#include "PuzzlePieceCondition.generated.h"

USTRUCT(BlueprintType)
struct HELIOS_API FPuzzlePieceCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPuzzlePieceEditorDropDown conditionPuzzlePiece;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPuzzlePieceConditionOperators conditionOperator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float conditionAmount;
    
    FPuzzlePieceCondition();
};

