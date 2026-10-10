#pragma once
#include "CoreMinimal.h"
#include "ECharacterAudioEventType.h"
#include "CharacterAudioEvent.generated.h"

USTRUCT(BlueprintType)
struct HELIOS_API FCharacterAudioEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterAudioEventType mType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mCustomType;
    
    FCharacterAudioEvent();
};

