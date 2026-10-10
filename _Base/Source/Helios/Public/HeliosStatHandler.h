#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GenericGameEvent.h"
#include "HeliosStatHandler.generated.h"

class AControlledPawn;

UCLASS(Blueprintable)
class UHeliosStatHandler : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AControlledPawn* PlayerPawn;
    
public:
    UHeliosStatHandler();

private:
    UFUNCTION()
    void OnPawnStateEvent(const FGenericGameEvent& gameEvent);
    
};

