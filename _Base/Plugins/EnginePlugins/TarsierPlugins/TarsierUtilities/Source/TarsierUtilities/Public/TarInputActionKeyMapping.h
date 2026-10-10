#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "TarInputKeyMappingBase.h"
#include "TarInputActionKeyMapping.generated.h"

USTRUCT(BlueprintType)
struct TARSIERUTILITIES_API FTarInputActionKeyMapping : public FTarInputKeyMappingBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 UseShift: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 UseCtrl: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 UseAlt: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 UseCmd: 1;
    
    FTarInputActionKeyMapping();
};

