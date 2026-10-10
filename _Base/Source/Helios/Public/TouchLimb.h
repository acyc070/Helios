#pragma once
#include "CoreMinimal.h"
#include "EIKTaskIdentifier.h"
#include "TouchTarget.h"
#include "TouchLimb.generated.h"

USTRUCT(BlueprintType)
struct HELIOS_API FTouchLimb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIKTaskIdentifier mTaskIkId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mMaxLimbLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTouchTarget> mTouchTargets;
    
    FTouchLimb();
};

