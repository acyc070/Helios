#pragma once
#include "CoreMinimal.h"
#include "GeneralLocomotionData.h"
#include "LocomotionAnimData.generated.h"

USTRUCT(BlueprintType)
struct HELIOS_API FLocomotionAnimData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGeneralLocomotionData mLocomotionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mLocomotionTypeMask;
    
    FLocomotionAnimData();
};

