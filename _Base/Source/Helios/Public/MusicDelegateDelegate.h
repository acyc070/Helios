#pragma once
#include "CoreMinimal.h"
#include "EAkMusicCallbackType.h"
#include "MusicDelegateDelegate.generated.h"

class UAkMusicSyncCallbackInfo;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FMusicDelegate, EAkMusicCallbackType, CallbackType, UAkMusicSyncCallbackInfo*, CallbackInfo);

