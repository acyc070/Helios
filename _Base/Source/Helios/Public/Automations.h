#pragma once
#include "CoreMinimal.h"
#include "EAutomationReplayMode.h"
#include "Automations.generated.h"

class AHeliosPlayerStart;
class UAutomationRecordStore;

USTRUCT(BlueprintType)
struct FAutomations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AHeliosPlayerStart> PlayerStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAutomationRecordStore*> Automations;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EAutomationReplayMode AutomationReplayMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDiscardReplayWhenUsed;
    
    HELIOS_API FAutomations();
};

