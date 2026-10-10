#pragma once
#include "CoreMinimal.h"
#include "ENoiseStrength.h"
#include "AlertStateProperties.generated.h"

USTRUCT(BlueprintType)
struct HELIOS_API FAlertStateProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StateCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StateDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENoiseStrength NoiseStrengthToIdentify;
    
    FAlertStateProperties();
};

