#pragma once
#include "CoreMinimal.h"
#include "PlayerSlideData.generated.h"

USTRUCT(BlueprintType)
struct FPlayerSlideData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 mIsSliding: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mFloorSlideAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mFeetHitWallAmount;
    
    HELIOS_API FPlayerSlideData();
};

