#pragma once
#include "CoreMinimal.h"
#include "SocketSelector.generated.h"

USTRUCT(BlueprintType)
struct FSocketSelector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mSkeletalmeshName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mSocketName;
    
    HELIOS_API FSocketSelector();
};

