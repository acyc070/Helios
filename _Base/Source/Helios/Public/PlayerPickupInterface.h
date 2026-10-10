#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "BaseGrabberInterface.h"
#include "ChalkboardSectionKey.h"
#include "EEquipSlots.h"
#include "FlowControlAnimNotifyData.h"
#include "GenericGameEvent.h"
#include "ObjectSelectionSettings.h"
#include "ObjectSelectorInterface.h"
#include "PlayerPickupDelegateDelegate.h"
#include "ThrowSettings.h"
#include "PlayerPickupInterface.generated.h"

class AActor;
class UAnimationAsset;
class UAnimationControlComponent;
class UInventoryComponent;
class UPickupComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HELIOS_API UPlayerPickupInterface : public UBaseGrabberInterface, public IObjectSelectorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerPickupDelegate mOnPickupHeldEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerPickupDelegate mOnPickupNotHeldEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EEquipSlots mCurrentEquipmentItemSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EEquipSlots mEquipmentItemSlotForcedStow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool mStoredItemAutoStowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool mUsablePickupHasTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle mUsableTargetTakeOutTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle mUsableTargetStoreTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mPickupRange;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval mVerticalPickupRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mMaxFacingPickupAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mPickupMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mCanRegrabOnPutdown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectSelectionSettings mObjectSelectionSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FThrowSettings mThrowSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mThrowEncroachmentCheckOffsetForward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mThrowEncroachmentCheckOffsetUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mCombatAlignmentTargetSearchDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mCombatAlignmentTargetSearchAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectSelectionSettings mCombatTargetSelectorSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FChalkboardSectionKey> mActionsWhereShouldStowEquipItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mLedgeMinHeightAutoStow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mPutUsableInPocketDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mTakeUsableOutDelay;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInventoryComponent* mInventoryComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPickupComponent* mInternalPickup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPickupComponent* mInternalQueuedPickup;
    
public:
    UPlayerPickupInterface(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool ToggleEquipItem(const EEquipSlots Item);
    
    UFUNCTION(BlueprintCallable)
    bool PutDownItemImmediately(bool onDeath);
    
private:
    UFUNCTION()
    void OnThrowAnimNotify(const FFlowControlAnimNotifyData& AnimNotify);
    
    UFUNCTION()
    void OnPickupPutdownNotify(const FFlowControlAnimNotifyData& AnimNotify);
    
    UFUNCTION()
    void OnPawnDeathEvent(const FGenericGameEvent& gameEvent);
    
    UFUNCTION()
    void OnAnimationOverrideStarted(UAnimationControlComponent* animControlComp, UAnimationAsset* AnimAsset);
    
public:
    UFUNCTION(BlueprintPure)
    UPickupComponent* GetCurrentlyHeldPickup() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetCurrentCarryable() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceStowOrDrop();
    

    // Fix for true pure virtual functions not being implemented
};

