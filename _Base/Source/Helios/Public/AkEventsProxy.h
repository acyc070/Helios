#pragma once
#include "CoreMinimal.h"
#include "EAkCallbackType.h"
#include "UObject/Object.h"
#include "EAudioVolumeGroupEventType.h"
#include "ThreatData.h"
#include "AkEventsProxy.generated.h"

class AAkAudioVolume;
class UAkCallbackInfo;

UCLASS(Blueprintable)
class HELIOS_API UAkEventsProxy : public UObject {
    GENERATED_BODY()
public:
    UAkEventsProxy();

    UFUNCTION(BlueprintCallable)
    void SendThreatLevelEvent(FThreatData ThreatData);
    
    UFUNCTION(BlueprintCallable)
    void SendGlobalAudioEvent(FName EventName, UObject* Instigator);
    
    UFUNCTION(BlueprintCallable)
    void SendAudioVolumeTransitionEvent(const AAkAudioVolume* AudioVolume, const EAudioVolumeGroupEventType EventType);
    
    UFUNCTION(BlueprintCallable)
    void SendAudioVolumeGroupEvent(const FName& groupName, const EAudioVolumeGroupEventType EventType);
    
    UFUNCTION(BlueprintCallable)
    void MusicCallback(EAkCallbackType inCallbackType, UAkCallbackInfo* inCallbackInfo);
    
};

