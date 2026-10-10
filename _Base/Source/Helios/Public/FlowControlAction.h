#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AIActionPattern.h"
#include "ChalkboardSectionKey.h"
#include "FlowControlAction.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UFlowControlAction : public UAIActionPattern {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChalkboardSectionKey mCommand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChalkboardSectionKey mCommandFloat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mHoldDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector mMoveInput;
    
    UFlowControlAction();

};

