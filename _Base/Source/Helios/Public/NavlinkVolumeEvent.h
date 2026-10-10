#pragma once
#include "CoreMinimal.h"
#include "EVolumeEventType.h"
#include "GenericGameEvent.h"
#include "NavlinkVolumeEvent.generated.h"

class UHeliosNavlinkComponent;

USTRUCT(BlueprintType)
struct HELIOS_API FNavlinkVolumeEvent : public FGenericGameEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVolumeEventType mType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHeliosNavlinkComponent* mNavlink;
    
    FNavlinkVolumeEvent();
};

