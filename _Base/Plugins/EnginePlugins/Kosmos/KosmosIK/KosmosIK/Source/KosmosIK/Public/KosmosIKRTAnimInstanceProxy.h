#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstanceProxy.h"
#include "KosmosIKRTAnimInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct KOSMOSIK_API FKosmosIKRTAnimInstanceProxy : public FAnimInstanceProxy {
    GENERATED_BODY()
public:
    FKosmosIKRTAnimInstanceProxy();
};

