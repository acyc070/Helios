#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EIKTaskIdentifier.h"
#include "IkClimbLimbSettings.generated.h"

class UGrabHelper;

USTRUCT(BlueprintType)
struct FIkClimbLimbSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EIKTaskIdentifier TaskIkId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox SearchLimits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UGrabHelper* CurrentGrabHelper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UGrabHelper* PreviousGrabHelper;
    
    HELIOS_API FIkClimbLimbSettings();
};

