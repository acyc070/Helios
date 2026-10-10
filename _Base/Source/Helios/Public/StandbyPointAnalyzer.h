#pragma once
#include "CoreMinimal.h"
#include "SmartPointAnalyzer.h"
#include "StandbyPointAnalyzer.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UStandbyPointAnalyzer : public USmartPointAnalyzer {
    GENERATED_BODY()
public:
    UStandbyPointAnalyzer();

};

