#pragma once
#include "CoreMinimal.h"
#include "AIReactivePattern.h"
#include "SoftEnumName.h"
#include "HunterReactToPlayerDeathPattern.generated.h"

class UAnimationAsset;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UHunterReactToPlayerDeathPattern : public UAIReactivePattern {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mAimAndShootPlaypal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftEnumName mReactAnimStateName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* mReloadAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mAimDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mAimTimeBeforeShooting;
    
    UHunterReactToPlayerDeathPattern();

};

