#pragma once
#include "CoreMinimal.h"
#include "LedgeInteractData.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct HELIOS_API FLedgeInteractData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mSnapHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mGrabHeightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mAutoTraverse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* mAnimation;
    
    FLedgeInteractData();
};

