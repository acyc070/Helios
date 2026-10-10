#pragma once
#include "CoreMinimal.h"
#include "AIReactivePattern.h"
#include "ReactToPlayerCallPattern.generated.h"

class AControlledPawn;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UReactToPlayerCallPattern : public UAIReactivePattern {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mReactionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mReactionDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mMaxTimeSinceCall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mDefaultReactionAnimationState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mDangerReactionAnimationState;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AControlledPawn* mPlayerPawn;
    
public:
    UReactToPlayerCallPattern();

};

