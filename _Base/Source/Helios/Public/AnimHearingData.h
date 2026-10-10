#pragma once
#include "CoreMinimal.h"
#include "AnimHearingData.generated.h"

USTRUCT(BlueprintType)
struct FAnimHearingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mIsListening;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mIsAlerted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mIsCustomAlerted;
    
    HELIOS_API FAnimHearingData();
};

