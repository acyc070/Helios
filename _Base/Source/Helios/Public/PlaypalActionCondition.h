#pragma once
#include "CoreMinimal.h"
#include "EPuzzlePieceConditionOperators.h"
#include "EPuzzlePiecePlaypalActionModifiers.h"
#include "PlaypalActionCondition.generated.h"

USTRUCT(BlueprintType)
struct HELIOS_API FPlaypalActionCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPuzzlePiecePlaypalActionModifiers performAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPuzzlePieceConditionOperators conditionOperator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float conditionAmount;
    
    FPlaypalActionCondition();
};

