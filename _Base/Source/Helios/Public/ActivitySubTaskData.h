#pragma once
#include "CoreMinimal.h"
#include "ActivitySubTaskData.generated.h"

USTRUCT(BlueprintType)
struct HELIOS_API FActivitySubTaskData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ActivityID;
    
    FActivitySubTaskData();
};

