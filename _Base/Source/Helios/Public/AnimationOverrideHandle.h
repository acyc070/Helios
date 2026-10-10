#pragma once
#include "CoreMinimal.h"
#include "AnimationOverrideHandle.generated.h"

USTRUCT(BlueprintType)
struct HELIOS_API FAnimationOverrideHandle {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Mid;
    
public:
    FAnimationOverrideHandle();
};

