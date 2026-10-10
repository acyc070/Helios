#pragma once
#include "CoreMinimal.h"
#include "BlueprintCondition.h"
#include "MetaCondition.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BLUEPRINTCONDITIONALSRUNTIME_API UMetaCondition : public UBlueprintCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UBlueprintCondition*> mConditions;
    
public:
    UMetaCondition();

};

