#pragma once
#include "CoreMinimal.h"
#include "GenericPawnEvent.h"
#include "AIAttentionEvent.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct HELIOS_API FAIAttentionEvent : public FGenericPawnEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* mFocusTarget;
    
    FAIAttentionEvent();
};

