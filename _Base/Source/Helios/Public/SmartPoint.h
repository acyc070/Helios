#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AbilitySetOverride.h"
#include "BaseAIPoint.h"
#include "ESmartPointType.h"
#include "HelComponentReference.h"
#include "LocomotionState.h"
#include "SmartPointOrderProxy.h"
#include "SmartPointProgressDelegateDelegate.h"
#include "SmartPointToggledDelegate.h"
#include "SmartPointVisitorInfo.h"
#include "SoftEnumName.h"
#include "SmartPoint.generated.h"

class APawn;
class ASmartPointActor;
class UAINavigationOptionsData;
class UBlendSpaceBase;
class USmartPoint;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HELIOS_API USmartPoint : public UBaseAIPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSmartPointProgressDelegate mOnProgressEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESmartPointType mPointType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mPointTypeFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftEnumName mCustomPointType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHelComponentReference mNextPointActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ASmartPointActor> mNextPointActorSoftPtr;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSmartPointToggled mOnToggled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAINavigationOptionsData* mNavigationOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocomotionState mLocomotionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mUseExactPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mUseExactDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mFollowAndRestart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mFollowAndRestartMinDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpaceBase* mTEMP_ArrivalBlendspace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpaceBase* mTEMP_DepartureBlendspace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mShowLinks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mStreamLevelWhileReserved;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mIsRepeatable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mRepeatableDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mMaxLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mGoalRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mLoopOrders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSmartPointOrderProxy> mOrders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbilitySetOverride mAbilitySetOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USmartPoint> mPreviousPointSoftPtr;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<APawn*, FSmartPointVisitorInfo> mVisitorsInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APawn* mReservedBy;
    
public:
    USmartPoint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SkipToActionForReservingPawn(int32 actionIndex);
    
    UFUNCTION(BlueprintCallable)
    void SkipToAction(APawn* Pawn, int32 actionIndex);
    
    UFUNCTION(BlueprintCallable)
    void SkipCurrentAction(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    void ResetVisitsToIndex(APawn* visitor, int32 indexOrder);
    
    UFUNCTION(BlueprintCallable)
    void ResetVisits(APawn* visitor);
    
    UFUNCTION(BlueprintCallable)
    void Reserve(APawn* visitor);
    
    UFUNCTION(BlueprintPure)
    APawn* ReservationPawn() const;
    
    UFUNCTION(BlueprintPure)
    bool OrdersShouldLoop() const;
    
    UFUNCTION(BlueprintPure)
    bool IsReserved() const;
    
    UFUNCTION(BlueprintPure)
    bool IsRepeatable() const;
    
    UFUNCTION(BlueprintPure)
    bool IsOfType(ESmartPointType spType) const;
    
    UFUNCTION(BlueprintPure)
    bool HasCompletedVisit(APawn* visitor) const;
    
    UFUNCTION(BlueprintPure)
    float GetTimeSinceVisited(APawn* visitor) const;
    
    UFUNCTION(BlueprintPure)
    USmartPoint* GetNextPoint() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetMoveToLocation() const;
    
    UFUNCTION(BlueprintPure)
    float GetGoalRadius() const;
    
    UFUNCTION(BlueprintCallable)
    void CancelReservation(APawn* visitor);
    
    UFUNCTION(BlueprintPure)
    bool CanBeVisitedBy(APawn* visitor) const;
    
};

