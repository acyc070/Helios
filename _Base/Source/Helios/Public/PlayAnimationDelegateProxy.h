#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AnimationControlDelegateDelegate.h"
#include "PlayAnimationDelegateProxy.generated.h"

class UAbilitySetOverrideData;
class UFlowControlComponent;
class UWorld;

UCLASS(Blueprintable)
class UPlayAnimationDelegateProxy : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAbilitySetOverrideData* mAbilitySetToApply;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFlowControlComponent> mFlowControlComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimationControlDelegate mOnAnimationFinishedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimationControlDelegate mOnAnimationInterruptedDelegate;
    
public:
    UPlayAnimationDelegateProxy();

private:
    UFUNCTION()
    void OnWorldReloaded(UWorld* World);
    
    UFUNCTION()
    void AnimationInterrupted(FName Name);
    
    UFUNCTION()
    void AnimationFinished(FName Name);
    
};

