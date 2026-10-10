#pragma once
#include "CoreMinimal.h"
#include "AIAudioState.h"
#include "GenericPawnEvent.h"
#include "AIStateChangeEvent.generated.h"

USTRUCT(BlueprintType)
struct HELIOS_API FAIStateChangeEvent : public FGenericPawnEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIAudioState mNewState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIAudioState mOldState;
    
    FAIStateChangeEvent();
};

