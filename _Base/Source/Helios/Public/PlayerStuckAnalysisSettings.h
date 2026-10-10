#pragma once
#include "CoreMinimal.h"
#include "PlayerStuckAnalysisSettings.generated.h"

USTRUCT(BlueprintType)
struct HELIOS_API FPlayerStuckAnalysisSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mStuckDetectionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mMaxMovementDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mMinPlayerInput;
    
    FPlayerStuckAnalysisSettings();
};

