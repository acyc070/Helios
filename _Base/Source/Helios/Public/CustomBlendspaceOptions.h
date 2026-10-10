#pragma once
#include "CoreMinimal.h"
#include "ChalkboardSectionKey.h"
#include "CustomBlendspaceOptions.generated.h"

class UBlendSpaceBase;

USTRUCT(BlueprintType)
struct HELIOS_API FCustomBlendspaceOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpaceBase* mBlendspaceToPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChalkboardSectionKey mXValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChalkboardSectionKey mYValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mLoop;
    
    FCustomBlendspaceOptions();
};

