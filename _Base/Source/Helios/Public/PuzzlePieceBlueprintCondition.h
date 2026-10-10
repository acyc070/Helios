#pragma once
#include "CoreMinimal.h"
#include "BlueprintCondition.h"
#include "PuzzlePieceCondition.h"
#include "PuzzlePieceBlueprintCondition.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class HELIOS_API UPuzzlePieceBlueprintCondition : public UBlueprintCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPuzzlePieceCondition mCondition;
    
public:
    UPuzzlePieceBlueprintCondition();

};

