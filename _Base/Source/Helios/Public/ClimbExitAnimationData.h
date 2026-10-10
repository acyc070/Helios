#pragma once
#include "CoreMinimal.h"
#include "ClimbExitAnimationData.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct HELIOS_API FClimbExitAnimationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* mExitToGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* mExitToTop;
    
    FClimbExitAnimationData();
};

