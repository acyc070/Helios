#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ProxyCLOCatchingData.generated.h"

USTRUCT(BlueprintType)
struct HELIOS_API FProxyCLOCatchingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform mProxyTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mCLOCatchingRadius;
    
    FProxyCLOCatchingData();
};

