#pragma once
#include "CoreMinimal.h"
#include "AIReactivePattern.h"
#include "EAIAlertState.h"
#include "EAIReactionAnimationState.h"
#include "ReactToNewDetectionPattern.generated.h"

class UAINavigationOptionsData;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UReactToNewDetectionPattern : public UAIReactivePattern {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mMaxTimeSinceDetection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIAlertState mAlertState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIReactionAnimationState mReactionAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mMaxReactionDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAINavigationOptionsData* mNavigationOptions;
    
    UReactToNewDetectionPattern();

};

