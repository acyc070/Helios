#pragma once
#include "CoreMinimal.h"
#include "PatternGroup.generated.h"

class UAIReactivePattern;

USTRUCT(BlueprintType)
struct HELIOS_API FPatternGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mGroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAIReactivePattern*> mPatterns;
    
    FPatternGroup();
};

