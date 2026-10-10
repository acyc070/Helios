#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PersistentGUID.generated.h"

USTRUCT(BlueprintType)
struct TARSIERUTILITIES_API FPersistentGUID {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid mGUID;
    
public:
    FPersistentGUID();
};

