#pragma once
#include "CoreMinimal.h"
#include "AIReactivePattern.h"
#include "LocomotionState.h"
#include "MoveAndAimAtTargetPattern.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UMoveAndAimAtTargetPattern : public UAIReactivePattern {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mMinAimDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mChaseGoalRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mLostLOFDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocomotionState mLocomotionMode;
    
    UMoveAndAimAtTargetPattern();

};

