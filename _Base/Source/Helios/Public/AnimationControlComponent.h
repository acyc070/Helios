#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/LatentActionManager.h"
#include "Engine/EngineTypes.h"
#include "AbilitySetOverride.h"
#include "AnimationControlDelegateDelegate.h"
#include "AnimationOverrideHandle.h"
#include "AnimationOverrideSignatureDelegate.h"
#include "CharacterAnimStateTransitions.h"
#include "CharacterAnimationSlotInfo.h"
#include "EAnimStateTransitionType.h"
#include "EAnimationLayering.h"
#include "ELatentPlayAnimationResult.h"
#include "EMovementRestriction.h"
#include "MovementControllerInterface.h"
#include "PlayAnimStateOptions.h"
#include "QueuedAnimationData.h"
#include "SoftEnumName.h"
#include "AnimationControlComponent.generated.h"

class AActor;
class AControlledPawn;
class UAbilitySetOverrideData;
class UAnimMetaData;
class UAnimSequenceBase;
class UAnimationAsset;
class UAnimationOverrideComponent;
class UAnimationSetupComponent;
class UBlendSpaceBase;
class UChalkboardWrapper;
class UCharacterCoreAnimInstance;
class UFlowControlComponent;
class ULocomotionComponent2;
class UTarAnimationListenerComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HELIOS_API UAnimationControlComponent : public UActorComponent, public IMovementControllerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mUseLegacyStateEvents;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimationOverrideSignature OnAnimationOverrideStarted;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mContextReevaluationInterval;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AControlledPawn* mControlledPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAnimationSetupComponent* mAnimSetupComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAnimationOverrideComponent* mAnimOverrideComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTarAnimationListenerComponent* mAnimListener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFlowControlComponent* mFlowControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCharacterCoreAnimInstance* mCharacterAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    ULocomotionComponent2* mLocomotionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UChalkboardWrapper* mSmartContextChalkboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mInvalidSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMovementRestriction mMovementRestrictionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterAnimationSlotInfo mAnimationStateSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mCurrentStateName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimationAsset* mCurrentAnimStateAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UAnimationAsset*, float> mLastTimesAnimationsPlayed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQueuedAnimationData> mAnimationQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimStateTransitionType mCurrentAnimStateTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimationControlDelegate mAnimStateFinishedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimationControlDelegate mAnimStateInterruptedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayAnimStateOptions mStatePlayOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle mRepickTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbilitySetOverride mInternalLocomotionOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimationOverrideHandle mStateOverridesHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimationOverrideHandle mLocomotionOverrideHandle;
    
public:
    UAnimationControlComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnsetLocomotion(FName Name, bool Run);
    
    UFUNCTION(BlueprintCallable)
    void StopAnimationState(FSoftEnumName Name, bool skipExitAnimation);
    
    UFUNCTION(BlueprintCallable)
    void StopAnimationOverrideState(bool skipExitAnimation);
    
    UFUNCTION(BlueprintCallable)
    void StopActionAnimation(FName Name);
    
    UFUNCTION(BlueprintCallable)
    void SetLocomotion(FName Name, bool Run);
    
    UFUNCTION(BlueprintCallable)
    void SetBlendSpaceInputForState(FName StateName, const FVector2D& Input);
    
    UFUNCTION(BlueprintCallable)
    void SetBlendSpaceForState(FName StateName, UBlendSpaceBase* BlendSpace);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimationStateDirection(const FVector& Direction);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimationStateBlendspaceInput(const FRotator& BlendspaceInput);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimationForState(FName StateName, UAnimSequenceBase* Animation);
    
    UFUNCTION(BlueprintCallable)
    void PlayBlendSpaceOverrideState(UBlendSpaceBase* blendSpaceToPlay, const FAnimationControlDelegate& OnFinished, const FAnimationControlDelegate& OnInterrupted, EMovementRestriction movementRestriction, bool Looping, FCharacterAnimStateTransitions Transitions);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    void PlayAnimationStateAndWait(float& DeltaTime, FSoftEnumName StateName, TSoftObjectPtr<UAbilitySetOverrideData> AbilitySetOverride, FLatentActionInfo LatentInfo, ELatentPlayAnimationResult& animResult);
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimationState(FSoftEnumName Name, const FAnimationControlDelegate& OnFinished, const FAnimationControlDelegate& OnInterrupted, FPlayAnimStateOptions playOptions);
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimationOverrideState(UAnimSequenceBase* AnimationToPlay, const FAnimationControlDelegate& OnFinished, const FAnimationControlDelegate& OnInterrupted, EMovementRestriction movementRestriction, bool Looping, FCharacterAnimStateTransitions Transitions);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    void PlayAnimationAndWait(float& DeltaTime, UAnimationAsset* Animation, FCharacterAnimStateTransitions Transitions, TSoftObjectPtr<UAbilitySetOverrideData> AbilitySetOverride, EAnimationLayering Layering, bool Additive, bool Loop, EMovementRestriction RootMotionMode, FLatentActionInfo LatentInfo, ELatentPlayAnimationResult& animResult);
    
    UFUNCTION(BlueprintCallable)
    void PlayActionAnimation(FName Name, const FAnimationControlDelegate& OnFinished, const FAnimationControlDelegate& OnInterrupted);
    
protected:
    UFUNCTION()
    void OnAnimationStateStarted(AActor* notifier, const FName& NotifyName, const TArray<UAnimMetaData*>& AnimMetaData);
    
    UFUNCTION()
    void OnAnimationStateFinished(AActor* notifier, const FName& NotifyName, const TArray<UAnimMetaData*>& AnimMetaData);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsPlayingOverrideAnimation() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsPlayingAnimationState(const FSoftEnumName& Name);
    
    UFUNCTION(BlueprintCallable)
    void CopyLocomotionToDefault(FName Name);
    

    // Fix for true pure virtual functions not being implemented
};

