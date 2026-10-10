#pragma once
#include "CoreMinimal.h"
#include "StringReferenceSMG.h"
#include "LevelNameReference.generated.h"

USTRUCT(BlueprintType)
struct FLevelNameReference : public FStringReferenceSMG {
    GENERATED_BODY()
public:
    HELIOS_API FLevelNameReference();
};
FORCEINLINE uint32 GetTypeHash(const FLevelNameReference) { return 0; }

