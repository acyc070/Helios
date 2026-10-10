#pragma once
#include "CoreMinimal.h"
#include "AttackAnimation.h"
#include "AttackAnimationArray.h"
#include "AttackSmartPointDelegateDelegate.h"
#include "SmartPointActor.h"
#include "AttackSmartPointActor.generated.h"

class AVolume;
class UAnimSequenceBase;

UCLASS(Blueprintable)
class HELIOS_API AAttackSmartPointActor : public ASmartPointActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAbortIfDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequenceBase*> mInvestigateAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AVolume*, FAttackAnimationArray> mAttackAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mInvestigateAnimBlendInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mInvestigateAnimBlendOutTime;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackSmartPointDelegate mActionFinishedDelegate;
    
    AAttackSmartPointActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    FAttackAnimation GetActiveAnimation(float investigationTime) const;
    
};

