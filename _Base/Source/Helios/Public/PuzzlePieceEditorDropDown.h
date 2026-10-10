#pragma once
#include "CoreMinimal.h"
#include "PuzzlePieceEditorDropDown.generated.h"

USTRUCT(BlueprintType)
struct HELIOS_API FPuzzlePieceEditorDropDown {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mPuzzlePieceID;
    
    FPuzzlePieceEditorDropDown();
};

