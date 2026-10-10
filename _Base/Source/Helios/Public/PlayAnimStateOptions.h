#pragma once
#include "CoreMinimal.h"
#include "PlayAnimStateOptions.generated.h"

USTRUCT(BlueprintType)
struct HELIOS_API FPlayAnimStateOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SkipExitTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SkipEnterTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SmartContextDomination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ReevaluateIfContextChange;
    
    FPlayAnimStateOptions();
};

