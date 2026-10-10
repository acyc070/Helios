#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "AnimDragData.h"
#include "AnimDragParams.h"
#include "AnimFallData.h"
#include "AnimJumpData.h"
#include "AnimLandData.h"
#include "AnimLeverData.h"
#include "AnimationAttackData.h"
#include "AnimationOverrideHandle.h"
#include "AnimationSyncData.h"
#include "CharacterCoreAnimInstance.h"
#include "ClimbTraversalData.h"
#include "EPlayerInventoryItemData.h"
#include "FallData.h"
#include "FalloffAnimationData.h"
#include "HangAnimParams.h"
#include "HangTraversalData.h"
#include "PlayerAnimLedgeData.h"
#include "PlayerCarryData.h"
#include "PlayerClimbData.h"
#include "PlayerHandholdingData.h"
#include "PlayerQuickTurnData.h"
#include "PlayerSlideData.h"
#include "PlayerAnimInstance.generated.h"

class AActor;
class AControlledPawn;
class UAnimMetaData;
class UAnimSequenceBase;
class UAnimationAsset;
class UAnimationControlComponent;

UCLASS(Blueprintable, NonTransient)
class HELIOS_API UPlayerAnimInstance : public UCharacterCoreAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAnimationSyncData mLocomotionAnimationSyncData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPlayerAnimLedgeData mLedgeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPlayerClimbData mCurrentClimbData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FClimbTraversalData mCurrentLedgeClimbingTraversalData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FClimbTraversalData mCurrentClimbingTraversalData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHangTraversalData mCurrentHangData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHangAnimParams mHangAnimParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAnimLeverData mLeverData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAnimDragData mDragData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimDragParams mDragAnimParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPlayerCarryData mCurrentCarryData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPlayerQuickTurnData mCurrentQuickTurnData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFalloffAnimationData mFalloffData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAnimationAttackData mAttackAnimationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPlayerInventoryItemData mCurrentInventoryItemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAnimJumpData mJumpData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAnimLandData mLandData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAnimFallData mFallData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPlayerHandholdingData mHandholdingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPlayerSlideData mSlideData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool mRemoteInUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mLedgeClimbBlockedAnimLockInTimeStand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mLedgeClimbBlockedAnimLockInTimeHang;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mClimbMinAnimSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mClimbGlobalAnimMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClimbFallFastVelocityThreshold;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval ClimbFallInitNormalVelocityRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mClimbSlowsAnimWithIKStretch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FallWallImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool GroundWallImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mWallHitBelowWaist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector mWallHitCrossProduct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* mOverrideStandIdleLookAtAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimationOverrideHandle mStandIdleAnimationOverrideHandle;
    
public:
    UPlayerAnimInstance();

protected:
    UFUNCTION(BlueprintPure)
    bool ShouldWalkOrIdle() const;
    
    UFUNCTION(BlueprintPure)
    bool ShouldStrafeStandTurn() const;
    
    UFUNCTION(BlueprintPure)
    bool ShouldIdle() const;
    
    UFUNCTION(BlueprintPure)
    bool ShouldExitWalk() const;
    
    UFUNCTION()
    void OnPlayerAnimNotify(AActor* notifier, const FName& NotifyName, const TArray<UAnimMetaData*>& AnimMetaData);
    
    UFUNCTION()
    void OnLanded(AControlledPawn* Pawn, const FFallData& FallData);
    
    UFUNCTION()
    void OnJumpStart(const FVector& jumpVec);
    
    UFUNCTION()
    void OnBounceOffWall(const FVector& bounceVector, bool belowWaist);
    
    UFUNCTION()
    void OnAnimationOverrideStarted(UAnimationControlComponent* animComp, UAnimationAsset* AnimAsset);
    
    UFUNCTION(BlueprintPure)
    bool IsQuickturnAllowed() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInWalkingMovementMode() const;
    
};

