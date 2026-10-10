#pragma once
#include "CoreMinimal.h"
#include "EInteractAnimType.h"
#include "EPickupHoldStyle.h"
#include "EPickupState.h"
#include "PlayerCarryData.generated.h"

USTRUCT(BlueprintType)
struct FPlayerCarryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInteractAnimType mInteractionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPickupHoldStyle mPickupHoldStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPickupState mPickupState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mDeltaZToHolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mAngleToTarget;
    
    HELIOS_API FPlayerCarryData();
};

