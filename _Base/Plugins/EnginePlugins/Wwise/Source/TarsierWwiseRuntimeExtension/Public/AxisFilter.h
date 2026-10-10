#pragma once
#include "CoreMinimal.h"
#include "AxisFilter.generated.h"

USTRUCT(BlueprintType)
struct FAxisFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mZ;
    
    TARSIERWWISERUNTIMEEXTENSION_API FAxisFilter();
};

