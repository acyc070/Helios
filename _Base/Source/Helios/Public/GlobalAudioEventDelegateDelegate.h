#pragma once
#include "CoreMinimal.h"
#include "GlobalAudioEventDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FGlobalAudioEventDelegate, const FName, EventName, const FString&, instigatorName);

