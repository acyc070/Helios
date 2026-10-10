#pragma once
#include "CoreMinimal.h"
#include "TarSmoothFollowerParams.generated.h"

USTRUCT(BlueprintType)
struct TARSIERUTILITIES_API FTarSmoothFollowerParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ApproachDeceleration;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OvershootK;
    
    FTarSmoothFollowerParams();
};

