#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SmartPointAnalyserSettings.generated.h"

USTRUCT(BlueprintType)
struct HELIOS_API FSmartPointAnalyserSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mPointCloseRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector mMaxDistanceFromNavmesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mMaxDistanceToPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mMinTimeSinceVisited;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mMaxTimeInfluence;
    
    FSmartPointAnalyserSettings();
};

