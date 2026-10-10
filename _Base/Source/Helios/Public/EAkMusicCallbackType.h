#pragma once
#include "CoreMinimal.h"
#include "EAkMusicCallbackType.generated.h"

UENUM()
enum class EAkMusicCallbackType : uint8 {
    MusicPlayStarted,
    MusicSyncBeat,
    MusicSyncBar,
    MusicSyncEntry,
    MusicSyncExit,
    MusicSyncGrid,
    MusicSyncUserCue,
    MusicSyncPoint,
    MIDIEvent,
};

