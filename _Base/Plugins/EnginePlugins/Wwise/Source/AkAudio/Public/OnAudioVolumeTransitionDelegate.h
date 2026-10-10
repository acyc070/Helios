#pragma once
#include "CoreMinimal.h"
#include "OnAudioVolumeTransitionDelegate.generated.h"

class AAkAudioVolume;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAudioVolumeTransition, AAkAudioVolume*, AudioVolume);

