#pragma once
#include "CoreMinimal.h"
#include "ELookAtBlendSpaceOverrideType.h"
#include "ELookinatorMode.h"
#include "AnimLookData.generated.h"

USTRUCT(BlueprintType)
struct FAnimLookData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELookAtBlendSpaceOverrideType mCurrentLookAtOverrideType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELookinatorMode mCurrentLookAtMode;
    
    HELIOS_API FAnimLookData();
};

