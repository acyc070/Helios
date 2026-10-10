#pragma once
#include "CoreMinimal.h"
#include "FalloffAnimationData.generated.h"

USTRUCT(BlueprintType)
struct FFalloffAnimationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool mIsBalancing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool mIsWalkingAlong;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool mShouldWalkStop;
    
    HELIOS_API FFalloffAnimationData();
};

