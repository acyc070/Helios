#pragma once
#include "CoreMinimal.h"
#include "WalkStopAnimSetCandidate.h"
#include "WalkStopAnimSet.generated.h"

USTRUCT(BlueprintType)
struct HELIOS_API FWalkStopAnimSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWalkStopAnimSetCandidate> WalkStopCandidates;
    
    FWalkStopAnimSet();
};

