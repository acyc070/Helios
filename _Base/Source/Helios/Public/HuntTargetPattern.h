#pragma once
#include "CoreMinimal.h"
#include "AIReactivePattern.h"
#include "HuntTargetPattern.generated.h"

class AActor;
class UMoveToLocationAction;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UHuntTargetPattern : public UAIReactivePattern {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mPredictionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mStartHuntDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mTooCloseDistance;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* mTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMoveToLocationAction* mMovePattern;
    
public:
    UHuntTargetPattern();

};

