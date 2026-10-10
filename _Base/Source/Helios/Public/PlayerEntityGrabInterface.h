#pragma once
#include "CoreMinimal.h"
#include "BaseGrabberInterface.h"
#include "PlayerEntityGrabInterface.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HELIOS_API UPlayerEntityGrabInterface : public UBaseGrabberInterface {
    GENERATED_BODY()
public:
    UPlayerEntityGrabInterface(const FObjectInitializer& ObjectInitializer);

};

