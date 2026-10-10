#pragma once
#include "CoreMinimal.h"
#include "ExternalBlendSettings.generated.h"

USTRUCT(BlueprintType)
struct FExternalBlendSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mBlendWeight;
    
    CAMERASYSTEMRUNTIME_API FExternalBlendSettings();
};

