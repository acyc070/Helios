#pragma once
#include "CoreMinimal.h"
#include "AINavigationOptions_Arrival.h"
#include "AINavigationOptions_ArriveBeforeActor.h"
#include "AINavigationOptions_Cruise.h"
#include "AbilitySetOverride.h"
#include "HeliosFloatInterval.h"
#include "SoftEnumName.h"
#include "AINavigationOptions.generated.h"

USTRUCT(BlueprintType)
struct FAINavigationOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftEnumName mLocomotionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHeliosFloatInterval mMinMaxMoveRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAINavigationOptions_Cruise mDesiredMoveRateOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAINavigationOptions_Arrival mArrivalOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAINavigationOptions_ArriveBeforeActor mArriveBeforeOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mConstantSprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mIntermittentSprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHeliosFloatInterval mMoveDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbilitySetOverride mAbilitySetOverride;
    
    HELIOS_API FAINavigationOptions();
};

