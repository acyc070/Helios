#pragma once
#include "CoreMinimal.h"
#include "EAudioVolumeGroupEventType.h"
#include "AudioVolumeTransitionEventDelegateDelegate.generated.h"

class AAkAudioVolume;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FAudioVolumeTransitionEventDelegate, const AAkAudioVolume*, activeAudioVolume, const EAudioVolumeGroupEventType, EventType);

