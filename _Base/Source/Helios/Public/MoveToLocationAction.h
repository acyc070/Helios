#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AIActionPattern.h"
#include "LocomotionState.h"
#include "MoveToLocationAction.generated.h"

class UAINavigationOptionsData;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UMoveToLocationAction : public UAIActionPattern {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector mEndLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector mEndDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mGoalRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mAllowedFailTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mClearMovementOnTermination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAINavigationOptionsData* mNavigationOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocomotionState mLocomotionState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mUseNavNavigation;
    
    UMoveToLocationAction();

private:
    UFUNCTION()
    void OnMoveFailed(float failTime, int32 failCount);
    
    UFUNCTION()
    void OnDestinationReached();
    
public:
    UFUNCTION(BlueprintCallable)
    void AdjustDestinationAndDirection(const FVector& EndLocation, const FVector& endDirection);
    
    UFUNCTION(BlueprintCallable)
    void AdjustDestination(const FVector& EndLocation);
    
};

