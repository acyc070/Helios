#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DebugExampleComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HELIOS_API UDebugExampleComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UDebugExampleComponent(const FObjectInitializer& ObjectInitializer);

};

