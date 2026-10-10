#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "BaseGrabberInterface.h"
#include "CharacterTransitionData.h"
#include "FlowControlAnimNotifyData.h"
#include "MovementLogicOverrideInterface.h"
#include "ObjectSelectionPriority.h"
#include "ObjectSelectionSettings.h"
#include "ObjectSelectorInterface.h"
#include "PlayerDragInterface.generated.h"

class IDraggableInterface;
class UDraggableInterface;
class UAnimationAsset;
class UAnimationControlComponent;
class UGrabHelper;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HELIOS_API UPlayerDragInterface : public UBaseGrabberInterface, public IMovementLogicOverrideInterface, public IObjectSelectorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mPushPullForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mPushPullRotationForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mCanPassivelyPush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mPassivePushReach;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mPassivePushAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mPassivePushAngleHysterisis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mPassivePushLocomotionThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mPlacementOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mGrabCompleteNotify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterTransitionData mIntoDragTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mMinTransitionSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectSelectionSettings mObjectSelectionSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mMaxDistanceToGrabHelper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mFollowGrabHelperSpeed;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve mInputToLinearPush;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve mInputToRotationalPush;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectSelectionPriority mSelectionPriorityBoost;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mMaxPushAwayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mAutoReleaseAtPitch;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IDraggableInterface> mGrabbedDraggable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGrabHelper* mGrabbedGrabHelper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool mIsAdjustingPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool mIsStuckBetweenWallAndDraggable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float mForceEndTimeStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float mCachedCapsuleHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float mInitialDragGrabSpeed;
    
public:
    UPlayerDragInterface(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnReachedGrabPosition();
    
    UFUNCTION()
    void OnCancelledTransition();
    
protected:
    UFUNCTION()
    void OnAnimationOverrideStarted(UAnimationControlComponent* animControlComp, UAnimationAsset* AnimAsset);
    
    UFUNCTION()
    void NotifyGrabComplete(const FFlowControlAnimNotifyData& AnimNotify);
    
private:
    UFUNCTION()
    void IKSecondHand();
    
    UFUNCTION()
    void IKFirstHand();
    

    // Fix for true pure virtual functions not being implemented
};

