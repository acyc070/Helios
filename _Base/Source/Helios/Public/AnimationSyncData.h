#pragma once
#include "CoreMinimal.h"
#include "AnimationSyncData.generated.h"

USTRUCT(BlueprintType)
struct HELIOS_API FAnimationSyncData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartPosition;
    
    FAnimationSyncData();
};

