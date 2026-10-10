#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OverrideBlendspaceData.generated.h"

class UBlendSpaceBase;

USTRUCT(BlueprintType)
struct FOverrideBlendspaceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpaceBase* mBlendspace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D mBlendspaceValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mLoop;
    
    HELIOS_API FOverrideBlendspaceData();
};

