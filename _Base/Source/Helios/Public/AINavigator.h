#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "AINavigationOptions.h"
#include "EAINavigationStrategy.h"
#include "LocomotionState.h"
#include "MoveFailedDelegateDelegate.h"
#include "OnPathClearedDelegate.h"
#include "AINavigator.generated.h"

class AActor;
class APawn;
class UAIAnimator;
class UAIBaseModularBrain;
class UAINavigationOptionsData;
class UChalkboardWrapper;
class UFlowControlComponent;
class UHeliosNavlinkComponent;
class ULocomotionComponent2;
class UPathFindingComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HELIOS_API UAINavigator : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAINavigationOptionsData* mDefaultNavigationOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAINavigationOptionsData* mInitialNavigationOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocomotionState mDefaultLocomotionState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mDefaultGoalRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mPathLookAheadDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DirectLineMaxLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mEndMovementFixedTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mUseAtlasTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinRepathInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DirectLineMaxElevation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mNavPolyExperiment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mNavPolyDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mNavPolyDrawOffset;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval mWallAvoidanceDistance;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval mWallAvoidanceWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mSteeringArrowsLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPathCleared OnPathCleared;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAINavigationOptions mCurrentNavigationOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SimpleDisplay, Transient, meta=(AllowPrivateAccess=true))
    UChalkboardWrapper* NavChalkboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAIBaseModularBrain* mBrain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APawn* mPawnSelf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPathFindingComponent* mPathfinder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAIAnimator* mAnimator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    ULocomotionComponent2* mLocomotionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SimpleDisplay, Transient, meta=(AllowPrivateAccess=true))
    UFlowControlComponent* mFlowControlComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UHeliosNavlinkComponent*> mEnteredNavlinks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHeliosNavlinkComponent* mCurrentNavlink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHeliosNavlinkComponent* mCachedNextNavlink;
    
public:
    UAINavigator(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void TeleportTo(const FVector& Location);
    
public:
    UFUNCTION(BlueprintCallable)
    void StopOverDistance(float Distance);
    
    UFUNCTION(BlueprintCallable)
    void Stop(bool forceStop);
    
    UFUNCTION(BlueprintCallable)
    void SetNavigationOptions_Blueprint(UAINavigationOptionsData* navigationOptions, FLocomotionState LocomotionState);
    
    UFUNCTION(BlueprintCallable)
    void ResetNavigationOptions();
    
    UFUNCTION(BlueprintCallable)
    void ResetDesiredMoveSpeedOverride();
    
    UFUNCTION(BlueprintCallable)
    void ResetDefaultNavigationOptions();
    
    UFUNCTION(BlueprintCallable)
    void OverrideDesiredMoveSpeed(float desiredSpeed);
    
    UFUNCTION(BlueprintCallable)
    void OverrideDesiredMoveRate(float desiredRate01);
    
    UFUNCTION(BlueprintCallable)
    void MoveInDirection(FVector Direction);
    
    UFUNCTION(BlueprintPure)
    bool IsTraversingNavlink() const;
    
    UFUNCTION(BlueprintPure)
    EAINavigationStrategy GetNavStrategy() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxSpeed() const;
    
    UFUNCTION(BlueprintCallable)
    void Follow(const AActor* actorToFollow, const FMoveFailedDelegate& OnFollowFailed, FVector followOffset, float followExtrapolationTime, bool Strafe);
    
    UFUNCTION(BlueprintCallable)
    void Flee(const AActor* actorToFlee);
    
    UFUNCTION(BlueprintCallable)
    void FacePoint(const FVector& pointToFace);
    
    UFUNCTION(BlueprintCallable)
    void Face(const FVector& facingDirection);
    
    UFUNCTION(BlueprintCallable)
    void ChangeDefaultNavigationOptions(UAINavigationOptionsData* navigationOptions, FLocomotionState LocomotionState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void BlueprintMoveTo(const FVector& Destination, const FVector& endDirection);
    
public:
    UFUNCTION(BlueprintCallable)
    void ArriveBeforeActor(const AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void AdjustFollowExtrapolationTime(float extrapolationTime);
    
    UFUNCTION(BlueprintCallable)
    void AdjustFollow(FVector followOffset);
    
};

