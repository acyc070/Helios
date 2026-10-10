#pragma once
#include "CoreMinimal.h"
#include "ClimberAttachRule.generated.h"

USTRUCT(BlueprintType)
struct HELIOS_API FClimberAttachRule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mHorisontalMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mVerticalMaxDistance;
    
    FClimberAttachRule();
};

