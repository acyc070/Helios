#pragma once
#include "CoreMinimal.h"
#include "AIAnalyzer.h"
#include "LookAnalyzer.generated.h"

class UChalkboardWrapper;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API ULookAnalyzer : public UAIAnalyzer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mTypesToAnalyze;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UChalkboardWrapper* mUsedChalkboard;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UClass* mOwnerClass;
    
public:
    ULookAnalyzer();

};

