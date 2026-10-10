#pragma once
#include "CoreMinimal.h"
#include "AkCodecId.generated.h"

UENUM()
enum class AkCodecId : uint8 {
    Bank,
    PCM,
    ADPCM,
    XMA,
    Vorbis,
    WiiADPCM,
    PCMEX = 7,
    ExternalSource,
    XWMA,
    AAC,
    FilePackage,
    ATRAC9,
    VAG,
    ProfilerCapture,
    AnalysisFile,
    MIDI,
    OpusNX,
    CAF,
    AkOpus,
};

