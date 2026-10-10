#pragma once
#include "CoreMinimal.h"
#include "LeechStartupAnimationData.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct HELIOS_API FLeechStartupAnimationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* InitialAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ActivationAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TransitionIntoFallingWhenDone;
    
    FLeechStartupAnimationData();
};

