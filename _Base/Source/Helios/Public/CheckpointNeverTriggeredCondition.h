#pragma once
#include "CoreMinimal.h"
#include "BlueprintCondition.h"
#include "CheckpointNeverTriggeredCondition.generated.h"

class ACheckpointVolume;

UCLASS(Blueprintable, EditInlineNew)
class UCheckpointNeverTriggeredCondition : public UBlueprintCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ACheckpointVolume> mCheckpointVolume;
    
    UCheckpointNeverTriggeredCondition();

};

