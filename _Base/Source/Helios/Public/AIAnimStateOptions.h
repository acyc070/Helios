#pragma once
#include "CoreMinimal.h"
#include "PlayAnimStateOptions.h"
#include "AIAnimStateOptions.generated.h"

USTRUCT(BlueprintType)
struct HELIOS_API FAIAnimStateOptions : public FPlayAnimStateOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDuration;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UpperBodyOnly;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NoLocking;
    
    FAIAnimStateOptions();
};

