#pragma once
#include "CoreMinimal.h"
#include "CameraRotationLerpParams.generated.h"

USTRUCT(BlueprintType)
struct FCameraRotationLerpParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mMaxAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mApproachRetardation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mOvershootK;
    
    CAMERASYSTEMRUNTIME_API FCameraRotationLerpParams();
};

