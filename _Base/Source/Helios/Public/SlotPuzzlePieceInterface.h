#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "SlotPuzzlePieceInterface.generated.h"

class AActor;

UINTERFACE()
class HELIOS_API USlotPuzzlePieceInterface : public UInterface {
    GENERATED_BODY()
};

class HELIOS_API ISlotPuzzlePieceInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION()
    virtual void OnActorHitEvent(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) PURE_VIRTUAL(OnActorHitEvent,);
    
};

