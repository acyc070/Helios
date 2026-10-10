#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PerformanceTestUStructWithAutoSerialization.generated.h"

USTRUCT(BlueprintType)
struct FPerformanceTestUStructWithAutoSerialization {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mIntValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mNameValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform mTransformValue;
    
    HELIOS_API FPerformanceTestUStructWithAutoSerialization();
};

