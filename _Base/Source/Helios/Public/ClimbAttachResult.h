#pragma once
#include "CoreMinimal.h"
#include "ClimbAttachResult.generated.h"

class UClimbableBaseComponent;

USTRUCT(BlueprintType)
struct FClimbAttachResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UClimbableBaseComponent* mTarget;
    
    HELIOS_API FClimbAttachResult();
};

