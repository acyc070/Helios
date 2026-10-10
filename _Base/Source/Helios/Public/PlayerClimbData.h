#pragma once
#include "CoreMinimal.h"
#include "PlayerClimbData.generated.h"

USTRUCT(BlueprintType)
struct FPlayerClimbData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 mIsTraversingClimbable: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mAnimPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mDropOffAnimPlayRate;
    
    HELIOS_API FPlayerClimbData();
};

