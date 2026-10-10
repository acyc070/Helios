#pragma once
#include "CoreMinimal.h"
#include "GenericWorldEvent.h"
#include "GenericActorEvent.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct HELIOS_API FGenericActorEvent : public FGenericWorldEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* mActor;
    
    FGenericActorEvent();
};

