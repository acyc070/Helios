#pragma once
#include "CoreMinimal.h"
#include "BlueprintCondition.h"
#include "CrossLevelChalkboardCondition.generated.h"

class UChalkboardWrapper;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class HELIOS_API UCrossLevelChalkboardCondition : public UBlueprintCondition {
    GENERATED_BODY()
public:
    UCrossLevelChalkboardCondition();

private:
    UFUNCTION(BlueprintPure)
    UChalkboardWrapper* GetCrossLevelChalkboard() const;
    
};

