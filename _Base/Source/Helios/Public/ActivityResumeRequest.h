#pragma once
#include "CoreMinimal.h"
#include "ActivityResumeRequest.generated.h"

USTRUCT(BlueprintType)
struct HELIOS_API FActivityResumeRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ActivityID;
    
    FActivityResumeRequest();
};

