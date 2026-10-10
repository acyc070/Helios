#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "BaseGrabbableComponent.h"
#include "ChalkboardSectionKey.h"
#include "CharacterTransitionData.h"
#include "EAttackType.h"
#include "EEquipSlots.h"
#include "EFallType.h"
#include "EPickUpPointType.h"
#include "EPickupHoldStyle.h"
#include "ERotationAxis.h"
#include "ObjectSelectionPriority.h"
#include "ObjectSelectionSettings.h"
#include "PickupDelegateDelegate.h"
#include "PickupDelegateWithPickupRefDelegate.h"
#include "PickupThrowDelegate.h"
#include "SoftEnumName.h"
#include "PickupComponent.generated.h"

class AActor;
class AControlledPawn;
class UAbilitySetOverrideData;
class UAnimSequence;
class UBlendSpaceBase;
class UCharacterAnimationSlots;
class UCharacterIKControllerComponent;
class UPuzzleSlotReceiverComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HELIOS_API UPickupComponent : public UBaseGrabbableComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPickupDelegate mOnPickupStartedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPickupDelegateWithPickupRef mOnPickupStartedEvent_withPickupRef;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPickupDelegate mOnPickupFinishedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPickupDelegate mOnPickupAttachEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPickupDelegate mOnPutdownStartedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPickupDelegate mOnPutdownFinishedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPickupDelegateWithPickupRef mOnPutdownFinishedEvent_withPickupRef;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPickupDelegate mOnPutdownDetachEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPickupDelegate mOnForceDrop;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPickupDelegate mOnPickupSlotAttachEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPickupDelegate mOnPickupSlotDetachEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPickupDelegate mOnThrowStartedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPickupThrow mOnThrow;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPickupDelegate mOnHeldEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPickupDelegate mOnNotHeldEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPickupDelegate mOnPickupSpawnedInInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mEnabledForAI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mItemTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mItemPriority;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterAnimationSlots* mPickupAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* mCustomPickupAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mPlayCustomPickupAnimationOnlyOnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* mPickupAnimationForPointB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* mCrouchedPickupAnimationForPointB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpaceBase* mPickupOverrideComplexAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAbilitySetOverrideData* mEquippableItemAbilitySetOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAbilitySetOverrideData* mEquippedAbilitySetOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEquipSlots mInventorySlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mPermanentStoredItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mAllowDropOnStumble;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mGrabOffsetSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftEnumName mAttachmentSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mForceRotationToForwardVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mUpdateRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mRequiresConstantInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mCanThrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mCanPutdown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mShouldPutDownOnAnimationOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mShouldPutDownOnCurrentTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector mPutDownPositionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector mOptionalCollisionShapeHalfExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChalkboardSectionKey mEquippableUseChalkboardKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectSelectionPriority mSelectionPriorityBoost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mSlotEjectSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mSlotEjectDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D mThrowDistanceMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectSelectionSettings mThrowTargetSelectorSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mStoredItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mOriginalShouldUseSoftAttachment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentReference mPrimitiveComponentReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mLeftHandEffector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform mLeftHandTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mRightHandEffector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform mRightHandTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mAllowFastPickupRelease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mDeferredCollisionDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mAttachedPickupDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPickupHoldStyle mPickupHoldStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mShouldHavePickUpPointA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mShouldHavePickUpPointB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform mPickUpPointA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform mPickUpPointB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterTransitionData mTransitionToPickUpPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mDistanceAdditionAfterTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERotationAxis mRotationAxisToIgnore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mShouldChangeCollisionSettingsOnTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mShouldLerpTowardsHands;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFallType mAutoDropFallType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString mPickupType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AControlledPawn> mHolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPuzzleSlotReceiverComponent* mSlotAttached;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCharacterIKControllerComponent* mCharacterIKComponent;
    
public:
    UPickupComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    bool TryThrow();
    
    UFUNCTION(BlueprintCallable)
    bool TryPutdown();
    
    UFUNCTION(BlueprintCallable)
    bool TryPickUp(AControlledPawn* Holder);
    
    UFUNCTION()
    void SoftAttachItem(AActor* Instigator);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetPickUpPointTransform(EPickUpPointType pointType, const FTransform& NewTransform);
    
    UFUNCTION(BlueprintCallable)
    void SetPickupAnimationSet(UCharacterAnimationSlots* animationSlot);
    
private:
    UFUNCTION()
    void SetOriginalCollisionProfile();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool IsEnabled);
    
    UFUNCTION(BlueprintPure)
    bool IsStoredItem() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInActiveState() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCurrentlyHeld() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAttachedToSlotBP() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAnEquipItem() const;
    
    UFUNCTION(BlueprintPure)
    bool HasCustomPickupAnimation() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetSlot() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetPickUpTargetDirection(const FVector& holderLocation) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetPickUpPointLocation(AActor* Holder) const;
    
    UFUNCTION(BlueprintPure)
    FName GetItemName() const;
    
    UFUNCTION(BlueprintPure)
    AControlledPawn* GetHolderIfHeld() const;
    
    UFUNCTION(BlueprintPure)
    AControlledPawn* GetHolder() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetGrabSocketRotation() const;
    
private:
    UFUNCTION(BlueprintCallable)
    bool ForceDrop(bool isThrown);
    
public:
    UFUNCTION(BlueprintCallable)
    void DetachFromSlotBP(bool eject);
    
    UFUNCTION(BlueprintPure)
    bool CanFastPickupRelease() const;
    
    UFUNCTION(BlueprintPure)
    bool CanBeDroppedOnStumble() const;
    
private:
    UFUNCTION()
    void AttachItemWithoutKeepingPhysicality(AActor* Instigator, AActor* Target, int32 AttackIndex, EAttackType AttackType);
    
public:
    UFUNCTION(BlueprintCallable)
    void AttachCarryableToSlot(UPuzzleSlotReceiverComponent* slotReceiver, bool canBeRemovedByPlayer, bool instant);
    
};

