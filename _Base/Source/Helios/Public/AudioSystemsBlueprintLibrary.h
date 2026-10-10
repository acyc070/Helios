#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AudioVolumeGroupEventDelegateDelegate.h"
#include "AudioVolumeTransitionEventDelegateDelegate.h"
#include "GlobalAudioEventDelegateDelegate.h"
#include "MusicDelegateDelegate.h"
#include "ThreatGroup.h"
#include "ThreatLevelEventDelegateDelegate.h"
#include "AudioSystemsBlueprintLibrary.generated.h"

class AActor;
class AAkAudioVolume;
class UAkAudioEvent;
class UAkAuxBus;
class UAkComponent;
class UObject;

UCLASS(Blueprintable)
class HELIOS_API UAudioSystemsBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAudioSystemsBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void UnbindThreatLevelEvents(const FThreatLevelEventDelegate& threatLevelEvents);
    
    UFUNCTION(BlueprintCallable)
    static void UnbindMusicSyncCallback(const FMusicDelegate& Callback);
    
    UFUNCTION(BlueprintCallable)
    static void UnbindGlobalAudioEvent(const FGlobalAudioEventDelegate& globalAudioEvent);
    
    UFUNCTION(BlueprintCallable)
    static void UnbindAudioVolumeTransitionEvents(const FAudioVolumeTransitionEventDelegate& audioVolumeTransitionEvents);
    
    UFUNCTION(BlueprintCallable)
    static void UnbindAudioVolumeGroupEvents(const FAudioVolumeGroupEventDelegate& audioVolumeGroupEvents);
    
    UFUNCTION(BlueprintCallable)
    static void StopGlobalMusic();
    
    UFUNCTION(BlueprintCallable)
    static void StartGlobalMusic();
    
    UFUNCTION(BlueprintCallable)
    static void SetGlobalAudioSettings(UAkAudioEvent* inAudioEvent, UAkAuxBus* inReverb, float inReverbSend, FName inDefaultSurfaceMaterial);
    
    UFUNCTION(BlueprintCallable)
    static void SendGlobalAudioEvent(FName AudioEvent, UObject* Instigator);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterDefaultListener(AActor* attachment);
    
    UFUNCTION(BlueprintCallable)
    static void PostGlobalEvent(UAkAudioEvent* AudioEvent);
    
    UFUNCTION(BlueprintPure)
    static UAkComponent* GetMusicPlaybackComponent();
    
    UFUNCTION(BlueprintCallable)
    static FThreatGroup GetHighestThreat();
    
    UFUNCTION(BlueprintPure)
    static UAkComponent* GetGlobalAmbienceComponent();
    
    UFUNCTION(BlueprintCallable)
    static TArray<AAkAudioVolume*> GetAudioVolumesOfGroup(FName audioVolumeGroup);
    
    UFUNCTION(BlueprintPure)
    static UAkComponent* GetAudioVolumeAmbienceComponent();
    
    UFUNCTION(BlueprintPure)
    static AAkAudioVolume* GetActiveAudioVolume();
    
    UFUNCTION(BlueprintCallable)
    static void BindThreatLevelEvents(const FThreatLevelEventDelegate& threatLevelEvents);
    
    UFUNCTION(BlueprintCallable)
    static void BindMusicSyncCallback(const FMusicDelegate& Callback);
    
    UFUNCTION(BlueprintCallable)
    static void BindGlobalAudioEvent(const FGlobalAudioEventDelegate& globalAudioEvent);
    
    UFUNCTION(BlueprintCallable)
    static void BindAudioVolumeTransitionEvents(const FAudioVolumeTransitionEventDelegate& audioVolumeTransitionEvents);
    
    UFUNCTION(BlueprintCallable)
    static void BindAudioVolumeGroupEvents(const FAudioVolumeGroupEventDelegate& audioVolumeGroupEvents);
    
};

