#pragma once
#include "CoreMinimal.h"
#include "EPawnType.h"
#include "AINavigationOptions_ArriveBeforeActor.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FAINavigationOptions_ArriveBeforeActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPawnType mPawnSelector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mIdealDistanceAheadOfActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mCatchupBlendingDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mAheadBlendingDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* mCachedOtherActor;
    
    HELIOS_API FAINavigationOptions_ArriveBeforeActor();
};

