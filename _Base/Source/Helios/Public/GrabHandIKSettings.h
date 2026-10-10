#pragma once
#include "CoreMinimal.h"
#include "GrabHandIKSettings.generated.h"

USTRUCT(BlueprintType)
struct FGrabHandIKSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mSideOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mHeightMultiplier;
    
    HELIOS_API FGrabHandIKSettings();
};

