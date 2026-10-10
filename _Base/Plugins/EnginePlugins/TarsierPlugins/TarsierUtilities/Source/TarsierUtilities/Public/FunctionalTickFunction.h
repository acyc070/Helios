#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "FunctionalTickFunction.generated.h"

USTRUCT(BlueprintType)
struct TARSIERUTILITIES_API FFunctionalTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    FFunctionalTickFunction();
};

template<>
struct TStructOpsTypeTraits<FFunctionalTickFunction> : public TStructOpsTypeTraitsBase2<FFunctionalTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

