#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CrossLevelObjectManagerEventsProxy.generated.h"

class AActor;
class UPickupComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class HELIOS_API UCrossLevelObjectManagerEventsProxy : public UObject {
    GENERATED_BODY()
public:
    UCrossLevelObjectManagerEventsProxy();

private:
    UFUNCTION()
    void OnCrossLevelObjectRootComponentAwake(UPrimitiveComponent* Component, FName BoneName);
    
    UFUNCTION()
    void OnCrossLevelObjectRootComponentAsleep(UPrimitiveComponent* Component, FName BoneName);
    
    UFUNCTION()
    void OnCrossLevelObjectPutDown(AActor* Actor, UPickupComponent* Pickup);
    
    UFUNCTION()
    void OnCrossLevelObjectPickedUp(AActor* Actor, UPickupComponent* Pickup);
    
    UFUNCTION()
    void OnCrossLevelObjectDestroyed(AActor* DestroyedActor);
    
};

