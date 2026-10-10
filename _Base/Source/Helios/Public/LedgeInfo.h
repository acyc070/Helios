#pragma once
#include "CoreMinimal.h"
#include "LedgeInfo.generated.h"

class UGrabbableLedgeComponent;

USTRUCT(BlueprintType)
struct FLedgeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UGrabbableLedgeComponent> mLedgeComponent;
    
    HELIOS_API FLedgeInfo();
};

