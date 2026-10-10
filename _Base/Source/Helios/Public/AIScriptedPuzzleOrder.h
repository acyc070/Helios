#pragma once
#include "CoreMinimal.h"
#include "AIScriptedOrder.h"
#include "EAIInteractionOrderType.h"
#include "AIScriptedPuzzleOrder.generated.h"

class APuzzlePieceActor;

UCLASS(Blueprintable, EditInlineNew)
class HELIOS_API UAIScriptedPuzzleOrder : public UAIScriptedOrder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APuzzlePieceActor* mPuzzlePiece;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIInteractionOrderType mInteraction;
    
    UAIScriptedPuzzleOrder();

};

