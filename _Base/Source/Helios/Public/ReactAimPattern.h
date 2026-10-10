#pragma once
#include "CoreMinimal.h"
#include "ReactToNewDetectionPattern.h"
#include "ReactAimPattern.generated.h"

class UFirearmComponent;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UReactAimPattern : public UReactToNewDetectionPattern {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFirearmComponent* mFirearm;
    
public:
    UReactAimPattern();

};

