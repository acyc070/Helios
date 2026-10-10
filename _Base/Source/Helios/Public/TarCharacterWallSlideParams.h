#pragma once
#include "CoreMinimal.h"
#include "TarCharacterWallSlideParams.generated.h"

USTRUCT(BlueprintType)
struct FTarCharacterWallSlideParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HysteresisAngle;
    
    HELIOS_API FTarCharacterWallSlideParams();
};

