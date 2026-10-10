#pragma once
#include "CoreMinimal.h"
#include "EAIAudioState.h"
#include "AIAudioState.generated.h"

USTRUCT(BlueprintType)
struct HELIOS_API FAIAudioState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mStringState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIAudioState mState;
    
    FAIAudioState();
};

