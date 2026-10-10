#pragma once
#include "CoreMinimal.h"
#include "AnimShootingData.generated.h"

USTRUCT(BlueprintType)
struct FAnimShootingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 mWantsToShoot: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 mWantsToReload: 1;
    
    HELIOS_API FAnimShootingData();
};

