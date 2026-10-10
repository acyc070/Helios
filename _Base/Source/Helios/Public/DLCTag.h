#pragma once
#include "CoreMinimal.h"
#include "EHeliosDLC.h"
#include "DLCTag.generated.h"

USTRUCT(BlueprintType)
struct HELIOS_API FDLCTag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Enabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHeliosDLC Tag;
    
    FDLCTag();
};

