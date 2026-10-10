#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Automations.h"
#include "AutomationActor.generated.h"

UCLASS(Blueprintable)
class AAutomationActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAutomations> Automations;
    
    AAutomationActor(const FObjectInitializer& ObjectInitializer);

};

