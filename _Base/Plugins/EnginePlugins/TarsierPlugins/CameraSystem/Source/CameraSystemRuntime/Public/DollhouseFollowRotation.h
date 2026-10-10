#pragma once
#include "CoreMinimal.h"
#include "DollhouseFollowRotation.generated.h"

USTRUCT(BlueprintType)
struct FDollhouseFollowRotation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mPitchMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mPitchMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mYawMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mYawMax;
    
    CAMERASYSTEMRUNTIME_API FDollhouseFollowRotation();
};

