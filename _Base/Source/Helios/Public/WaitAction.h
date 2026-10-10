#pragma once
#include "CoreMinimal.h"
#include "AIActionPattern.h"
#include "WaitAction.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UWaitAction : public UAIActionPattern {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mWaitDuration;
    
    UWaitAction();

};

