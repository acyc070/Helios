#pragma once
#include "CoreMinimal.h"
#include "AIActionPattern.h"
#include "UseSmartPointAction.generated.h"

class UAIBaseReactivePattern;
class USmartPoint;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UUseSmartPointAction : public UAIActionPattern {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USmartPoint* mSmartPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAIBaseReactivePattern* mLastPattern;
    
public:
    UUseSmartPointAction();

};

