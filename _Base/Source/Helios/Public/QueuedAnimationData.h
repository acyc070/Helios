#pragma once
#include "CoreMinimal.h"
#include "AnimGenericStateData.h"
#include "AnimationControlDelegateDelegate.h"
#include "EAnimStateTransitionType.h"
#include "EMovementRestriction.h"
#include "QueuedAnimationData.generated.h"

class UAnimationAsset;

USTRUCT(BlueprintType)
struct HELIOS_API FQueuedAnimationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimStateTransitionType mTransitionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimationAsset* mAnimationAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimGenericStateData mStateData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMovementRestriction mMovementRestrictionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimationControlDelegate mAnimStateFinishedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimationControlDelegate mAnimStateInterruptedDelegate;
    
    FQueuedAnimationData();
};

