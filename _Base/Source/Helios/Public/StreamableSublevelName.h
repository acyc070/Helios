#pragma once
#include "CoreMinimal.h"
#include "StreamableSublevelName.generated.h"

USTRUCT(BlueprintType)
struct FStreamableSublevelName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mSublevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mSkipPreload;
    
    HELIOS_API FStreamableSublevelName();
};

