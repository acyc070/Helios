#pragma once
#include "CoreMinimal.h"
#include "EAudioVolumeGroupEventType.h"
#include "AudioVolumeGroupEventDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FAudioVolumeGroupEventDelegate, const FName, groupName, const EAudioVolumeGroupEventType, EventType);

