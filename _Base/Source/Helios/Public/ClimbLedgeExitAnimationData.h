#pragma once
#include "CoreMinimal.h"
#include "ClimbLedgeExitAnimationData.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct HELIOS_API FClimbLedgeExitAnimationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* mExitToTop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* mReleaseGrab;
    
    FClimbLedgeExitAnimationData();
};

