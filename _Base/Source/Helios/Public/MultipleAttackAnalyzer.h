#pragma once
#include "CoreMinimal.h"
#include "AIAnalyzer.h"
#include "MultipleAttackAnalyzer.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UMultipleAttackAnalyzer : public UAIAnalyzer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mMaxAttackers;
    
    UMultipleAttackAnalyzer();

};

