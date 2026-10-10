#pragma once
#include "CoreMinimal.h"
#include "ChalkboardSectionKey.h"
#include "CharacterAnimStateContext.generated.h"

USTRUCT(BlueprintType)
struct HELIOS_API FCharacterAnimStateContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LocomotionContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChalkboardSectionKey SmartContext;
    
    FCharacterAnimStateContext();
};

