#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "AnimationControlDelegateDelegate.h"
#include "ChalkboardSectionKey.h"
#include "CharacterAnimStateTransitions.h"
#include "CustomBlendspaceOptions.h"
#include "EMovementRestriction.h"
#include "FlowControlAnimNotifyData.h"
#include "LocomotionState.h"
#include "PlayAnimStateOptions.h"
#include "SoftEnumName.h"
#include "AIAnimator.generated.h"

class AControlledPawn;
class UAIBaseModularBrain;
class UAnimSequenceBase;
class UAnimationControlComponent;
class UAnimationOverrideComponent;
class UAnimationSetupComponent;
class UBlendSpaceBase;
class UChalkboardWrapper;
class UFlowControlComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HELIOS_API UAIAnimator : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocomotionState mDefaultLocomotionModeOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocomotionState mCurrentLocomotionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mMaxHoldDuration;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAIBaseModularBrain* mBrain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AControlledPawn* mPawnSelf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAnimationControlComponent* mAnimControlComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAnimationOverrideComponent* mAnimOverrideComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAnimationSetupComponent* mAnimSetupComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFlowControlComponent* mFlowControl;
    
public:
    UAIAnimator(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopCurrentCustomAnimation();
    
    UFUNCTION(BlueprintCallable)
    void StopBlendspaceOverride();
    
    UFUNCTION(BlueprintCallable)
    void StopAnimationState(FSoftEnumName animStateName);
    
    UFUNCTION(BlueprintCallable)
    void StopAnimationOverrideState(bool skipExitAnimation);
    
    UFUNCTION(BlueprintCallable)
    void StopAdditiveAnimation();
    
    UFUNCTION(BlueprintCallable)
    void StopActionAnimation(FName ActionName);
    
    UFUNCTION(BlueprintCallable)
    void SetRawMoveInput(const FVector& rawInputDir);
    
    UFUNCTION(BlueprintCallable)
    void SetMoveSpeedRate(float rate0to1);
    
    UFUNCTION(BlueprintCallable)
    void SetMoveInput(const FVector& Direction);
    
    UFUNCTION(BlueprintCallable)
    void SetLocomotion(FName locomotionMode, bool Run);
    
    UFUNCTION(BlueprintCallable)
    void SetFacingInput(const FVector& Direction, bool instantRotation);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimationStateDirection(FVector Direction);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimationStateBlendspaceInput(FRotator BlendspaceInput);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimationNotifyDelegate(FName NotifyName, const FAnimationControlDelegate& OnHit);
    
    UFUNCTION(BlueprintCallable)
    void SetAlphaAdditiveAnimation(float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void PlayCustomBlendspace(FCustomBlendspaceOptions Options, const FAnimationControlDelegate& OnFinished);
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimOverrideState(UAnimSequenceBase* AnimationToPlay, UBlendSpaceBase* blendSpaceToPlay, const FAnimationControlDelegate& OnFinished, const FAnimationControlDelegate& OnInterrupted, EMovementRestriction movementRestriction, bool Looping, FCharacterAnimStateTransitions Transitions);
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimationState(FSoftEnumName animStateName, const FAnimationControlDelegate& OnFinished, const FAnimationControlDelegate& OnInterrupted, FPlayAnimStateOptions playOptions);
    
    UFUNCTION(BlueprintCallable)
    void PlayAdditiveAnimation(UAnimSequenceBase* AnimationToPlay, bool Loop, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void PlayActionAnimation(FName ActionName, const FAnimationControlDelegate& OnFinished, const FAnimationControlDelegate& OnInterrupted);
    
protected:
    UFUNCTION()
    void OnAnimationNotify(const FFlowControlAnimNotifyData& AnimNotify);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsCharacterRepulsionEnabled() const;
    
    UFUNCTION(BlueprintPure)
    float GetMoveSpeedRate() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetMoveInput() const;
    
    UFUNCTION(BlueprintPure)
    UFlowControlComponent* GetFlowControl() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetFacingInput() const;
    
    UFUNCTION(BlueprintPure)
    UChalkboardWrapper* GetAnimChalkboard() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableCharacterRepulsion(bool onOff);
    
    UFUNCTION(BlueprintCallable)
    void ClearMoveInput();
    
    UFUNCTION(BlueprintCallable)
    void ClearAnimationNotifyDelegate(FName NotifyName);
    
protected:
    UFUNCTION(BlueprintCallable)
    void BlueprintStopAction(FChalkboardSectionKey Action);
    
    UFUNCTION(BlueprintCallable)
    void BlueprintStartAction(FChalkboardSectionKey Action);
    
    UFUNCTION(BlueprintCallable)
    void BlueprintPlayCustomAnimation(UAnimSequenceBase* AnimationToPlay, bool Loop);
    
    UFUNCTION(BlueprintCallable)
    void BlueprintHoldAction(FChalkboardSectionKey Action);
    
};

