#pragma once
#include "CoreMinimal.h"
#include "AIReactivePattern.h"
#include "EMovementRestriction.h"
#include "HunterIdleBehaviorPattern.generated.h"

class UAnimSequenceBase;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UHunterIdleBehaviorPattern : public UAIReactivePattern {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* mIdleAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mMaxDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMovementRestriction mRootMotion;
    
    UHunterIdleBehaviorPattern();

};

