#pragma once
#include "CoreMinimal.h"
#include "CannedAnimationOptions.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct HELIOS_API FCannedAnimationOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* mCanimationSetup;
    
    FCannedAnimationOptions();
};

