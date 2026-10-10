#pragma once
#include "CoreMinimal.h"
#include "EAnimationOverrideEvents.generated.h"

UENUM()
enum class EAnimationOverrideEvents : uint8 {
    Unspecified,
    SequenceStarted,
    SequenceStartedBlendIn,
    SequenceFullyBlendedIn,
    SequenceLooped,
    SequenceBlendOutPoint,
    SequenceStartedBlendOut,
    SequenceFullyBlendedOut,
    SequenceStopped,
    BlendspaceStarted = 100,
    BlendspaceStartedBlendIn,
    BlendspaceFullyBlendedIn,
    BlendspaceLooped,
    BlendspaceBlendOutPoint,
    BlendspaceStartedBlendOut,
    BlendspaceFullyBlendedOut,
    BlendspaceStopped,
    MAX,
};

