#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CharacterAudioEvent.h"
#include "ControlledPawnLibrary.generated.h"

class AActor;

UCLASS(Blueprintable)
class HELIOS_API UControlledPawnLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UControlledPawnLibrary();

    UFUNCTION(BlueprintCallable)
    static void TriggerCharracterAudioEventForActor(AActor* Actor, FCharacterAudioEvent CharacterAudioEvent);
    
};

