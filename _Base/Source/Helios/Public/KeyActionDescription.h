#pragma once
#include "CoreMinimal.h"
#include "KeyActionDescription.generated.h"

USTRUCT(BlueprintType)
struct HELIOS_API FKeyActionDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AxisScale;
    
    FKeyActionDescription();
};

