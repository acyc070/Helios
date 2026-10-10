#pragma once
#include "CoreMinimal.h"
#include "LevelProvider.generated.h"

USTRUCT(BlueprintType)
struct TARSIERUTILITIES_API FLevelProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mLevelName;
    
    FLevelProvider();
};

