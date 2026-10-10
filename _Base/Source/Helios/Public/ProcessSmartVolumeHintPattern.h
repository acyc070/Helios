#pragma once
#include "CoreMinimal.h"
#include "AIReactivePattern.h"
#include "HeliosFloatInterval.h"
#include "ProcessSmartVolumeHintPattern.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UProcessSmartVolumeHintPattern : public UAIReactivePattern {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHeliosFloatInterval mMimicPlayerActionDelay;
    
public:
    UProcessSmartVolumeHintPattern();

};

