#pragma once
#include "CoreMinimal.h"
#include "ChalkboardSectionKey.h"
#include "ESmartVolumeHint.h"
#include "EVolumeEventType.h"
#include "GenericGameEvent.h"
#include "SmartVolumeEvent.generated.h"

USTRUCT(BlueprintType)
struct HELIOS_API FSmartVolumeEvent : public FGenericGameEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVolumeEventType mType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESmartVolumeHint mHint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChalkboardSectionKey mBehaviorHint1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChalkboardSectionKey mBehaviorHint2;
    
    FSmartVolumeEvent();
};

