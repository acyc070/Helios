#pragma once
#include "CoreMinimal.h"
#include "GenericActorEvent.h"
#include "HeliosLightEvent.generated.h"

class USmartPoint;

USTRUCT(BlueprintType)
struct HELIOS_API FHeliosLightEvent : public FGenericActorEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USmartPoint* mEscapePoint;
    
    FHeliosLightEvent();
};

