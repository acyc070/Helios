#pragma once
#include "CoreMinimal.h"
#include "KeyboardIDs.generated.h"

USTRUCT(BlueprintType)
struct HELIOS_API FKeyboardIDs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> QWERTYIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> AZERTYIds;
    
    FKeyboardIDs();
};

