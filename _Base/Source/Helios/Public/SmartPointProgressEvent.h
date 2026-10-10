#pragma once
#include "CoreMinimal.h"
#include "ESmartPointProgress.h"
#include "GenericPawnEvent.h"
#include "SmartPointProgressEvent.generated.h"

class USmartPoint;

USTRUCT(BlueprintType)
struct HELIOS_API FSmartPointProgressEvent : public FGenericPawnEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESmartPointProgress mProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USmartPoint* mSmartPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mCustomAudioEventID;
    
    FSmartPointProgressEvent();
};

