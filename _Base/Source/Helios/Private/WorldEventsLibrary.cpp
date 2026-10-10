#include "WorldEventsLibrary.h"

UWorldEventsLibrary::UWorldEventsLibrary() {
}

void UWorldEventsLibrary::SendDamageEvent(AActor* receiver, AActor* giver, EDamageType DamageType, EDamageSourceType damageSourceType, float damageAmount, FVector optionalDamageLocation, FVector optionalDamageDirection) {
}

void UWorldEventsLibrary::BroadcastScreamEvent(FScreamEvent ScreamEvent) {
}

void UWorldEventsLibrary::BroadcastPawnEvent(AActor* Actor, EPawnStateEventType EventType, bool stateOnOff) {
}

void UWorldEventsLibrary::BroadcastNoiseEventBy(AActor* Instigator, FSoftEnumName noiseID, ENoiseStrength Loudness, int32 noiseTags) {
}

void UWorldEventsLibrary::BroadcastNoiseEventAt(FVector Location, FSoftEnumName noiseID, ENoiseStrength Loudness, int32 noiseTags) {
}

void UWorldEventsLibrary::BroadcastNoiseEvent(AActor* Instigator, FVector Location, FSoftEnumName noiseID, ENoiseStrength Loudness, int32 noiseTags) {
}

void UWorldEventsLibrary::BroadcastLightEvent(AActor* Actor, AActor* Light, USmartPoint* escapePoint) {
}

void UWorldEventsLibrary::BroadcastGestureEvent(AControlledPawn* gesturingPawn, FName gestureName) {
}

void UWorldEventsLibrary::BroadcastGenericEvent(const FVector& eventPosition, FName aString) {
}

void UWorldEventsLibrary::BroadcastActorEvent(AActor* Actor, FName aString) {
}


