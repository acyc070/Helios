#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/LatentActionManager.h"
#include "AbilitySetOverride.h"
#include "CharacterLocomotionSetup.h"
#include "CharacterTransitionData.h"
#include "EAbilitySetCommunication.h"
#include "EAbilitySetGrab.h"
#include "EAbilitySetJump.h"
#include "EAbilitySetLocomotion.h"
#include "EAbilitySetOther.h"
#include "EAbilitySetPickup.h"
#include "EAbilitySetSlide.h"
#include "ELatentTransitionResult.h"
#include "ObjectSelectionManager.h"
#include "FlowControlComponent.generated.h"

class AActor;
class IMovementControllerInterface;
class UMovementControllerInterface;
class UAbilitySetData;
class UAbilitySetOverrideData;
class UAnimMetaData;
class UAnimationControlComponent;
class UCharacterTransitionManager;
class ULocomotionComponent2;
class UObject;
class UTarAnimationListenerComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HELIOS_API UFlowControlComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mUseAbilitySet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAbilitySetData* mAbilitySetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterLocomotionSetup mTransitionStrafeLocomotionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAbilitySetOverrideData* mTransitionAbilitySetOverride;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAnimationControlComponent* mAnimationControlComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterTransitionManager* mTransitionManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<IMovementControllerInterface>> mMovementControllers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    ULocomotionComponent2* mLocomotionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTarAnimationListenerComponent* mAnimationListenerComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectSelectionManager mObjectSelector;
    
public:
    UFlowControlComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void RemoveAbilitySetOverride(const FAbilitySetOverride& overrideData, UObject* callerObject);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseGrab();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    void QueueTransitionAndWait(FCharacterTransitionData transitionData, const FVector& TargetLocation, const FVector& targetDirection, FLatentActionInfo LatentInfo, const UAbilitySetOverrideData* AbilitySetOverride, ELatentTransitionResult& TransitionResult);
    
    UFUNCTION(BlueprintCallable)
    void QueueTransition(FCharacterTransitionData transitionData, const FVector& TargetLocation, const FVector& targetDirection, const UAbilitySetOverrideData* AbilitySetOverride);
    
    UFUNCTION()
    void OnPostProcessAnimNotifies(AActor* notifier);
    
    UFUNCTION()
    void OnAnimNotify(AActor* notifier, const FName& NotifyName, const TArray<UAnimMetaData*>& AnimMetaData);
    
    UFUNCTION(BlueprintPure)
    bool IsSlideAbilityActive(EAbilitySetSlide ability) const;
    
    UFUNCTION(BlueprintPure)
    bool IsPickupAbilityActive(EAbilitySetPickup ability) const;
    
    UFUNCTION(BlueprintPure)
    bool IsOtherAbilityActive(EAbilitySetOther ability) const;
    
    UFUNCTION(BlueprintPure)
    bool IsLocomotionAbilityActive(EAbilitySetLocomotion ability) const;
    
    UFUNCTION(BlueprintPure)
    bool IsJumpAbilityActive(EAbilitySetJump ability) const;
    
    UFUNCTION(BlueprintPure)
    bool IsGrabAbilityActive(EAbilitySetGrab ability) const;
    
    UFUNCTION(BlueprintPure)
    bool IsCommunicationAbilityActive(EAbilitySetCommunication ability) const;
    
    UFUNCTION(BlueprintCallable)
    void ApplyTimedAbilitySetOverride(const FAbilitySetOverride& overrideData, float overrideTime, UObject* callerObject);
    
    UFUNCTION(BlueprintCallable)
    void ApplyAbilitySetOverride(const FAbilitySetOverride& overrideData, UObject* callerObject);
    
};

