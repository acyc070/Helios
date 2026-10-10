#pragma once
#include "CoreMinimal.h"
#include "AIActionPattern.h"
#include "GoUsePuzzlePieceAction.generated.h"

class APuzzlePieceActor;
class UAINavigationOptionsData;
class UAIPuzzleInteraction;
class UMoveToLocationAction;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UGoUsePuzzlePieceAction : public UAIActionPattern {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APuzzlePieceActor* mPuzzlePiece;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAINavigationOptionsData* mNavigationOptions;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMoveToLocationAction* mMoveAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAIPuzzleInteraction* mPuzzleInteraction;
    
public:
    UGoUsePuzzlePieceAction();

};

