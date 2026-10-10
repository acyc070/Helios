#pragma once
#include "CoreMinimal.h"
#include "ESaveSystemPIELoadBehaviour.generated.h"

UENUM()
enum class ESaveSystemPIELoadBehaviour : uint8 {
    LoadFromDisk,
    DoNotLoadFromDiskButKeepInMemoryAcrossPlayInEditorSessions,
    AlwaysResetWhenStartingNewPlayInEditorSession,
};

