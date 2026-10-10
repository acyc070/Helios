#pragma once
#include "CoreMinimal.h"
#include "KosmosIKRTAnimInstance.h"
#include "AnimGenericStateData.h"
#include "AnimIKData.h"
#include "AnimLookData.h"
#include "AnimPhysicalReactionData.h"
#include "AnimWalkStartData.h"
#include "AnimWalkStopData.h"
#include "AnimWallData.h"
#include "AnimationCurveChalbkoardMapping.h"
#include "AnimationOverrideData.h"
#include "EAnimLocomotionType.h"
#include "EAnimOverrideType.h"
#include "EBlendSpaceOverrideType.h"
#include "EWalkCycleFoot.h"
#include "EWalkStartType.h"
#include "EWalkStopOverrideType.h"
#include "LocomotionAnimData.h"
#include "MovementControllerInterface.h"
#include "Templates/SubclassOf.h"
#include "CharacterCoreAnimInstance.generated.h"

class AActor;
class AControlledPawn;
class UAnimMetaData;
class UAnimSequenceBase;
class UBaseGrabberInterface;
class UBlendSpaceBase;
class UCharacterAnimationSlots;
class UCharacterIKControllerComponent;
class UCharacterLookAtBlendspaceSlots;
class UFlowControlComponent;
class UObject;

UCLASS(Blueprintable, NonTransient)
class HELIOS_API UCharacterCoreAnimInstance : public UKosmosIKRTAnimInstance, public IMovementControllerInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFlowControlComponent* mFlowControlComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AControlledPawn* mOwnerPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> RootmotionSources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocomotionAnimData mCurrentLocomotionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocomotionAnimData mLocomotionDataSnapshot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBaseGrabberInterface* mCurrentlyActiveGrabInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mUpdateWalkCycleRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mWalkCycleLeftMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mWalkCycleLeftMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mTimeRemainingAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimationOverrideData mAnimationOverrideData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimLookData mCurrentLookData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mYawSignFlipHysterisisAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharacterIKControllerComponent* mCharacterIKComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimIKData mIKData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterAnimationSlots* mDefaultAnimationSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterLookAtBlendspaceSlots* mDefaultLookAtBlendspaceSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimGenericStateData mGenericAnimationStateData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimGenericStateData mGenericAnimationStateData_Additive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimPhysicalReactionData mPhysicalReactionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnimationCurveChalbkoardMapping> mAnimationCurveToChalkboardMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimWalkStartData mCurrentWalkStartData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mInvertBlendspaceAngleForQuickTurn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimWalkStopData mWalkStopData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlopeActiveAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterAnimationSlots* mWalkUpSlopesAnimationSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterAnimationSlots* mWalkDownSlopesAnimationSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimWallData mWallData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterAnimationSlots* mPressAgainstWallAnimationSet;
    
public:
    UCharacterCoreAnimInstance();

    UFUNCTION(BlueprintPure)
    bool ShouldExitWalkingState() const;
    
    UFUNCTION(BlueprintCallable)
    void RemoveRootmotion(const UObject* Invoker);
    
protected:
    UFUNCTION()
    void OnWalkStartBegin(EWalkStartType Type);
    
    UFUNCTION()
    void OnAnimNotify(AActor* notifier, const FName& NotifyName, const TArray<UAnimMetaData*>& AnimMetaData);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsLocomotionSetEqual(const int32 locomotionCandidate);
    
    UFUNCTION(BlueprintPure)
    bool IsLocomotionSet(const EAnimLocomotionType locomotionType) const;
    
    UFUNCTION(BlueprintPure)
    bool IsGrabInterfaceActive(TSubclassOf<UBaseGrabberInterface> grabClass) const;
    
    UFUNCTION(BlueprintPure)
    bool IsBlendSpaceSlotDisabled(EBlendSpaceOverrideType overrideType) const;
    
    UFUNCTION(BlueprintPure)
    bool IsAnimationSlotDisabled(EAnimOverrideType overrideType) const;
    
    UFUNCTION(BlueprintPure)
    bool HasSequenceOverride(EAnimOverrideType overrideType, bool ignoreDefaultOverride) const;
    
    UFUNCTION(BlueprintPure)
    bool HasRootmotionEnabled();
    
    UFUNCTION(BlueprintPure)
    bool HasBlendSpace(EBlendSpaceOverrideType blendspaceSlot, bool ignoreDefaultOverride) const;
    
    UFUNCTION(BlueprintPure)
    EWalkCycleFoot GetWalkCycleFoot() const;
    
    UFUNCTION(BlueprintPure)
    UFlowControlComponent* GetFlowControlComponent() const;
    
    UFUNCTION(BlueprintPure)
    UAnimSequenceBase* GetAnimWalkStopOverrideForType(EWalkStopOverrideType overrideType, float walkCycle) const;
    
    UFUNCTION(BlueprintPure)
    UAnimSequenceBase* GetAnimSequenceOverrideForType(EAnimOverrideType overrideType) const;
    
    UFUNCTION(BlueprintPure)
    UAnimSequenceBase* GetAnimSequenceOverrideForName(FName overrideType) const;
    
    UFUNCTION(BlueprintPure)
    UBlendSpaceBase* GetAnimBlendSpaceForSlot(EBlendSpaceOverrideType overrideType) const;
    
    UFUNCTION(BlueprintCallable)
    void AddRootmotion(const UObject* Invoker);
    

    // Fix for true pure virtual functions not being implemented
};

