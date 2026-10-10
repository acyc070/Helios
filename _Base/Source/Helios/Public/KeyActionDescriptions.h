#pragma once
#include "CoreMinimal.h"
#include "KeyActionDescription.h"
#include "KeyActionDescriptions.generated.h"

USTRUCT(BlueprintType)
struct HELIOS_API FKeyActionDescriptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKeyActionDescription> KeyActionDescriptions;
    
    FKeyActionDescriptions();
};

