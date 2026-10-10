#pragma once
#include "CoreMinimal.h"
#include "ECharacterAudioEventSource.h"
#include "ECharacterAudioEventType.h"
#include "CharacterAudioEventSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FCharacterAudioEventSignature, ECharacterAudioEventSource, eventSource, ECharacterAudioEventType, EventType, FName, customType);

