#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HeldItemBaseComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HELIOS_API UHeldItemBaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UHeldItemBaseComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void OnPutDownStarted(AActor* Holder);
    
    UFUNCTION()
    void OnPutDown(AActor* Holder);
    
    UFUNCTION()
    void OnPickUpFinished(AActor* Holder);
    
    UFUNCTION()
    void OnPickedUp(AActor* Holder);
    
    UFUNCTION()
    void OnNotHeld(AActor* Holder);
    
    UFUNCTION()
    void OnHeld(AActor* Holder);
    
};

