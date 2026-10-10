#pragma once
#include "CoreMinimal.h"
#include "VisualFieldSettings.generated.h"

USTRUCT(BlueprintType)
struct HELIOS_API FVisualFieldSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mHorizontalFOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mVerticalFOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mRange;
    
    FVisualFieldSettings();
};

