#pragma once
#include "CoreMinimal.h"
#include "AIReactivePattern.h"
#include "FlowControlAnimNotifyData.h"
#include "KillPawnAfterGrabbing.generated.h"

class UDeathHandlerDataAsset;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UKillPawnAfterGrabbing : public UAIReactivePattern {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDeathHandlerDataAsset> mDeathAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDeathHandlerDataAsset> mCloseKillDeathAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayerDeathWithNotify;
    
public:
    UKillPawnAfterGrabbing();

protected:
    UFUNCTION()
    void NotifyHit(const FFlowControlAnimNotifyData& AnimNotify);
    
};

