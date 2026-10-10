#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AIPatternLoadout.generated.h"

class UAIAnalyzer;
class UAIReactivePattern;

UCLASS(Blueprintable, CollapseCategories, DefaultToInstanced, EditInlineNew)
class HELIOS_API UAIPatternLoadout : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAIReactivePattern*> mPatterns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAIAnalyzer*> mAnalyzers;
    
    UAIPatternLoadout();

};

