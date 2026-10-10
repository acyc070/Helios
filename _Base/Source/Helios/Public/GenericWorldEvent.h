#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GenericGameEvent.h"
#include "GenericWorldEvent.generated.h"

USTRUCT(BlueprintType)
struct HELIOS_API FGenericWorldEvent : public FGenericGameEvent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector mEventLocation;
    
public:
    FGenericWorldEvent();
};

