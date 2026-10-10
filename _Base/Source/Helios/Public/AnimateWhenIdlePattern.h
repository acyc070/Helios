#pragma once
#include "CoreMinimal.h"
#include "AIReactivePattern.h"
#include "AnimateWhenIdlePattern.generated.h"

class UIdleAnimationsDataAsset;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UAnimateWhenIdlePattern : public UAIReactivePattern {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mMinInactivityTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIdleAnimationsDataAsset* mAnimationsDataAsset;
    
    UAnimateWhenIdlePattern();

};

