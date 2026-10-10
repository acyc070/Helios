#pragma once
#include "CoreMinimal.h"
#include "AIActionOptions.generated.h"

class UAINavigationOptionsData;

USTRUCT(BlueprintType)
struct HELIOS_API FAIActionOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAINavigationOptionsData* mNavigationOptions;
    
    FAIActionOptions();
};

