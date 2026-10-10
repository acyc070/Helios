#pragma once
#include "CoreMinimal.h"
#include "AIReactivePattern.h"
#include "CharacterAnimStateTransitions.h"
#include "HunterInvestigatePattern.generated.h"

class UBlendSpaceBase;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UHunterInvestigatePattern : public UAIReactivePattern {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mMaxReactDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mReactionDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpaceBase* mBlendspaceToPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterAnimStateTransitions mAnimationTransitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mMaxTimeout;
    
    UHunterInvestigatePattern();

private:
    UFUNCTION()
    void OnShotFired();
    
    UFUNCTION()
    void OnBlendspaceDone(FName Name);
    
};

