#pragma once
#include "CoreMinimal.h"
#include "EDangerType.h"
#include "GenericWorldEvent.h"
#include "DangerEvent.generated.h"

USTRUCT(BlueprintType)
struct HELIOS_API FDangerEvent : public FGenericWorldEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDangerType mDangerType;
    
    FDangerEvent();
};

