#pragma once
#include "CoreMinimal.h"
#include "EPawnType.h"
#include "ThreatGroup.h"
#include "ThreatData.generated.h"

USTRUCT(BlueprintType)
struct FThreatData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FThreatGroup mHighestThreat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPawnType, FThreatGroup> mThreatGroups;
    
    HELIOS_API FThreatData();
};

