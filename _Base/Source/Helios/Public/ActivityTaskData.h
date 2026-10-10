#pragma once
#include "CoreMinimal.h"
#include "ActivitySubTaskData.h"
#include "ActivityTaskData.generated.h"

USTRUCT(BlueprintType)
struct HELIOS_API FActivityTaskData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ActivityID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActivitySubTaskData> SubTask;
    
    FActivityTaskData();
};

