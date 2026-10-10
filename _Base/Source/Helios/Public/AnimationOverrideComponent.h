#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AnimationOverrideHandle.h"
#include "EAnimationOverridePriority.h"
#include "EAnimationOverrideType.h"
#include "EMovementRestriction.h"
#include "FlowControlAnimNotifyData.h"
#include "MovementControllerInterface.h"
#include "PendingAnimationOverrideData.h"
#include "AnimationOverrideComponent.generated.h"

class UAnimSequenceBase;
class UAnimationControlComponent;
class UCharacterAnimationSlots;
class UCharacterCoreAnimInstance;
class UFlowControlComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HELIOS_API UAnimationOverrideComponent : public UActorComponent, public IMovementControllerInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mReplaceOldOverride;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCharacterCoreAnimInstance* mCharacterAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPendingAnimationOverrideData mAnimationSequenceOverrideData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPendingAnimationOverrideData mPendingAnimationSequenceOverrideData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFlowControlComponent* mFlowControlComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAnimationControlComponent* mAnimationControlComponent;
    
public:
    UAnimationOverrideComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopComplexOverrideLoop();
    
    UFUNCTION(BlueprintCallable)
    void StopAnimationSequenceOverride(bool skipExitAnimation);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideAnimation(EAnimationOverrideType overrideType, float enterBlendTime, float exitBlendtime);
    
    UFUNCTION(BlueprintCallable)
    void SetBlendspaceXY(float X, float Y);
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimationSequenceOverride2(UAnimSequenceBase* AnimationToPlay, EMovementRestriction movementRestriction, bool Looping, int32 Options, float BlendInTime, float BlendOutTime);
    
protected:
    UFUNCTION()
    void NotifyAnimationOverrideFinished(const FFlowControlAnimNotifyData& AnimNotify);
    
public:
    UFUNCTION(BlueprintCallable)
    FAnimationOverrideHandle AddOverrideAnimationSlots(const UCharacterAnimationSlots* overrideInfo, EAnimationOverridePriority Priority);
    

    // Fix for true pure virtual functions not being implemented
};

