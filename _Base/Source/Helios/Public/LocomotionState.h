#pragma once
#include "CoreMinimal.h"
#include "SoftEnumName.h"
#include "LocomotionState.generated.h"

USTRUCT(BlueprintType)
struct HELIOS_API FLocomotionState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mLocomotionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftEnumName mName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mRun;
    
    FLocomotionState();
};

