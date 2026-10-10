#pragma once
#include "CoreMinimal.h"
#include "BlueprintCondition.h"
#include "ActorValidityCondition.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class BLUEPRINTCONDITIONALSRUNTIME_API UActorValidityCondition : public UBlueprintCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> mActor;
    
public:
    UActorValidityCondition();

};

