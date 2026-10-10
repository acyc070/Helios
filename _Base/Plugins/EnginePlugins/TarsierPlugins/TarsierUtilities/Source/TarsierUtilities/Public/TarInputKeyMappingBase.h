#pragma once
#include "CoreMinimal.h"
#include "TarInputKeyMappingBase.generated.h"

USTRUCT(BlueprintType)
struct TARSIERUTILITIES_API FTarInputKeyMappingBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 GroupID;
    
    FTarInputKeyMappingBase();
};

