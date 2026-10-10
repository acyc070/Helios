#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EDamageSourceType.h"
#include "EDamageType.h"
#include "ENoiseStrength.h"
#include "EPawnStateEventType.h"
#include "ScreamEvent.h"
#include "SoftEnumName.h"
#include "WorldEventsLibrary.generated.h"

class AActor;
class AControlledPawn;
class USmartPoint;

UCLASS(Blueprintable)
class HELIOS_API UWorldEventsLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UWorldEventsLibrary();

    UFUNCTION(BlueprintCallable)
    static void SendDamageEvent(AActor* receiver, AActor* giver, EDamageType DamageType, EDamageSourceType damageSourceType, float damageAmount, FVector optionalDamageLocation, FVector optionalDamageDirection);
    
    UFUNCTION(BlueprintCallable)
    static void BroadcastScreamEvent(FScreamEvent ScreamEvent);
    
    UFUNCTION(BlueprintCallable)
    static void BroadcastPawnEvent(AActor* Actor, EPawnStateEventType EventType, bool stateOnOff);
    
    UFUNCTION(BlueprintCallable)
    static void BroadcastNoiseEventBy(AActor* Instigator, FSoftEnumName noiseID, ENoiseStrength Loudness, int32 noiseTags);
    
    UFUNCTION(BlueprintCallable)
    static void BroadcastNoiseEventAt(FVector Location, FSoftEnumName noiseID, ENoiseStrength Loudness, int32 noiseTags);
    
    UFUNCTION(BlueprintCallable)
    static void BroadcastNoiseEvent(AActor* Instigator, FVector Location, FSoftEnumName noiseID, ENoiseStrength Loudness, int32 noiseTags);
    
    UFUNCTION(BlueprintCallable)
    static void BroadcastLightEvent(AActor* Actor, AActor* Light, USmartPoint* escapePoint);
    
    UFUNCTION(BlueprintCallable)
    static void BroadcastGestureEvent(AControlledPawn* gesturingPawn, FName gestureName);
    
    UFUNCTION(BlueprintCallable)
    static void BroadcastGenericEvent(const FVector& eventPosition, FName aString);
    
    UFUNCTION(BlueprintCallable)
    static void BroadcastActorEvent(AActor* Actor, FName aString);
    
};

