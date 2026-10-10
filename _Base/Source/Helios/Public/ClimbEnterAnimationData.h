#pragma once
#include "CoreMinimal.h"
#include "ClimbEnterAnimationData.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct HELIOS_API FClimbEnterAnimationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* mEnterFromGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* mEnterFromAir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* mEnterFromTop;
    
    FClimbEnterAnimationData();
};

