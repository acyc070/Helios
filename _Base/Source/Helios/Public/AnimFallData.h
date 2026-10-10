#pragma once
#include "CoreMinimal.h"
#include "AnimFallData.generated.h"

USTRUCT(BlueprintType)
struct FAnimFallData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFalling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mFallHeight;
    
    HELIOS_API FAnimFallData();
};

