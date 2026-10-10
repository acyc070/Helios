#pragma once
#include "CoreMinimal.h"
#include "LedgeClimbParamsBase.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FLedgeClimbParamsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* mAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mExitToLedgeHang;
    
    HELIOS_API FLedgeClimbParamsBase();
};

