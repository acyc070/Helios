#pragma once
#include "CoreMinimal.h"
#include "GenericPawnEvent.h"
#include "AIResourceLockEvent.generated.h"

USTRUCT(BlueprintType)
struct HELIOS_API FAIResourceLockEvent : public FGenericPawnEvent {
    GENERATED_BODY()
public:
    FAIResourceLockEvent();
};

