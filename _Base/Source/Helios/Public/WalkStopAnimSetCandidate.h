#pragma once
#include "CoreMinimal.h"
#include "WalkStopAnimSetCandidate.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct HELIOS_API FWalkStopAnimSetCandidate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CycleStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* Animation;
    
    FWalkStopAnimSetCandidate();
};

