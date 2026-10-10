#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerInput.h"
#include "GameFramework/PlayerInput.h"
#include "TarInputActionKeyMapping.h"
#include "TarInputAxisKeyMapping.h"
#include "InputProfileRow.generated.h"

USTRUCT(BlueprintType)
struct FInputProfileRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTarInputActionKeyMapping> ActionMappingsArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTarInputAxisKeyMapping> AxisMappingsArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputActionKeyMapping> DefaultActionMappingsArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputAxisKeyMapping> DefaultAxisMappingsArray;
    
    TARSIERUTILITIES_API FInputProfileRow();
};

