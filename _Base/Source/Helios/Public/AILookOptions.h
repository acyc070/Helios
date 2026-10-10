#pragma once
#include "CoreMinimal.h"
#include "AILookOptions.generated.h"

USTRUCT(BlueprintType)
struct HELIOS_API FAILookOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpolationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OuterpolationTime;
    
    FAILookOptions();
};

