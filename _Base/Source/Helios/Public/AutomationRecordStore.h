#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AutomationRecordItem.h"
#include "AutomationRecordStore.generated.h"

UCLASS(Blueprintable)
class HELIOS_API UAutomationRecordStore : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsage;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAutomationRecordItem> Records;
    
public:
    UAutomationRecordStore();

};

