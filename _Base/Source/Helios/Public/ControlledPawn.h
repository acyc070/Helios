#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Character.h"
#include "VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "AnimationOverrideEvent.h"
#include "CharacterAudioEvent.h"
#include "CharacterAudioEventSignatureDelegate.h"
#include "CharacterThreatSettings.h"
#include "EAIAlertState.h"
#include "ECharacterAudioEventSource.h"
#include "ECharacterAudioEventType.h"
#include "EObjectCharacteristics.h"
#include "EOnDemandDetectionType.h"
#include "EPawnType.h"
#include "ESmoothAlignmentSettings.h"
#include "MovementControllerInterface.h"
#include "PawnStateEvent.h"
#include "PawnStateEventDelegateDelegate.h"
#include "ControlledPawn.generated.h"

class AActor;
class AControlledPawn;
class UAkComponent;
class UAnimationControlComponent;
class UAnimationOverrideComponent;
class UAnimationSetupComponent;
class UChalkboardWrapper;
class UCharacterIKControllerComponent;
class UFlashlightCombatComponent;
class UFlowControlComponent;
class UHealthAndDamageComponent;
class UInventoryComponent;
class ULocomotionComponent2;
class UMeshComponent;
class UPawnPropertiesComponent;
class UPhysicsAudioComponent;
class UPlayerPickupInterface;
class UTarAnimationListenerComponent;
class UWorldEventReceiver;

UCLASS(Blueprintable)
class HELIOS_API AControlledPawn : public ACharacter, public IMovementControllerInterface, public IVisualLoggerDebugSnapshotInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterAudioEventSignature OnCharacterAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> mOverlappingBedVolumes;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UChalkboardWrapper* mCharacterChalkboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPawnPropertiesComponent* mPawnProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWorldEventReceiver* mWorldEventReceiver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHealthAndDamageComponent* mHealthDamageComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mCeilingMarginForCapsule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mAllowsFloatingMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mMeshFloatLerpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnimationControlComponent* mAnimationControlComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnimationSetupComponent* mAnimationSetupComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFlowControlComponent* mFlowControlComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTarAnimationListenerComponent* mAnimationListenerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnimationOverrideComponent* mAnimationOverrideComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharacterIKControllerComponent* mIKControllerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhysicsAudioComponent* mAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterThreatSettings mThreatSettings;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPawnStateEventDelegate mOnPawnStateEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInventoryComponent* mCachedInventoryComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPlayerPickupInterface* mCachedPlayerPickupInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFlashlightCombatComponent* mCachedFlashlightCombatComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMeshComponent* mMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AControlledPawn* mDefaultPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMeshComponent* mDefaultMeshComponent;
    
public:
    AControlledPawn(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TriggerCharacterAudioEvent(const FCharacterAudioEvent& AudioEvent);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveCharacterAudioEvent(ECharacterAudioEventSource eventSource, ECharacterAudioEventType EventType, const FName& customType);
    
public:
    UFUNCTION(BlueprintCallable)
    void OverrideAIAlertState(EAIAlertState State);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPawnStateEvent(const FPawnStateEvent& PawnStateEvent);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAnimationOverrideEvent(const FAnimationOverrideEvent& AnimationOverrideEvent);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnActionCall();
    
    UFUNCTION(BlueprintPure)
    bool MatchesPawnTypeMask(int32 Mask) const;
    
    UFUNCTION(BlueprintPure)
    bool IsPreviousAIAlertState(EAIAlertState State) const;
    
    UFUNCTION(BlueprintPure)
    bool IsPlayer() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAlive() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAIAlertState(EAIAlertState State) const;
    
    UFUNCTION(BlueprintPure)
    bool HasCharacteristic(EObjectCharacteristics characteristic) const;
    
    UFUNCTION(BlueprintPure)
    UChalkboardWrapper* GetPublicInfoChalkboardWrapper() const;
    
    UFUNCTION(BlueprintPure)
    EAIAlertState GetPreviousAIAlertState() const;
    
    UFUNCTION(BlueprintPure)
    UPlayerPickupInterface* GetPlayerPickupInterface() const;
    
    UFUNCTION(BlueprintPure)
    EPawnType GetPawnType() const;
    
    UFUNCTION(BlueprintPure)
    ULocomotionComponent2* GetLocomotionComponent() const;
    
    UFUNCTION(BlueprintNativeEvent)
    FVector GetLocationOfDangerousPart() const;
    
    UFUNCTION(BlueprintPure)
    UInventoryComponent* GetInventoryComponent() const;
    
    UFUNCTION(BlueprintPure)
    UFlashlightCombatComponent* GetFlashlightCombatComponent() const;
    
    UFUNCTION(BlueprintPure)
    UChalkboardWrapper* GetCharacterChalkboardWrapper() const;
    
    UFUNCTION(BlueprintPure)
    UChalkboardWrapper* GetAIChalkboardWrapper() const;
    
    UFUNCTION(BlueprintPure)
    EAIAlertState GetAIAlertState() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetActorFeetLocation() const;
    
    UFUNCTION(BlueprintCallable)
    void DetectionOnDemand(FVector Location, AActor* Actor, EOnDemandDetectionType detectionType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DebugWhistleEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AnimationAudioNotify(UAkComponent* AkComponent, const FName& EventName);
    
    UFUNCTION(BlueprintCallable)
    void AlignToTransform(const FTransform& Transform, float Duration, ESmoothAlignmentSettings Settings, bool OverrideMovement, bool AllowZMovement);
    
    UFUNCTION(BlueprintCallable)
    void AICancelInvestigation();
    

    // Fix for true pure virtual functions not being implemented
};

