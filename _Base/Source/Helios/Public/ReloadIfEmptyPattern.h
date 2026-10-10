#pragma once
#include "CoreMinimal.h"
#include "AIReactivePattern.h"
#include "ReloadIfEmptyPattern.generated.h"

class UFirearmComponent;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UReloadIfEmptyPattern : public UAIReactivePattern {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFirearmComponent* mFirearm;
    
public:
    UReloadIfEmptyPattern();

};

