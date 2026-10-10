#pragma once
#include "CoreMinimal.h"
#include "EAIReactionAnimationState.h"
#include "GenericPawnEvent.h"
#include "AIReactionFeedbackEvent.generated.h"

USTRUCT(BlueprintType)
struct HELIOS_API FAIReactionFeedbackEvent : public FGenericPawnEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIReactionAnimationState mNewState;
    
    FAIReactionFeedbackEvent();
};

