#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "InputCoreTypes.h"
#include "ForbiddenKeyRow.generated.h"

USTRUCT(BlueprintType)
struct FForbiddenKeyRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey Key;
    
    TARSIERUTILITIES_API FForbiddenKeyRow();
};

