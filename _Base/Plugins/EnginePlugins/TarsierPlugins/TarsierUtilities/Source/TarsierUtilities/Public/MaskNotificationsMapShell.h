#pragma once
#include "CoreMinimal.h"
#include "MaskNotificationsMapShell.generated.h"

USTRUCT(BlueprintType)
struct FMaskNotificationsMapShell {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> MaskNotificationsMap;
    
    TARSIERUTILITIES_API FMaskNotificationsMapShell();
};

