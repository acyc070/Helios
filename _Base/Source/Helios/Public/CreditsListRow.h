#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CreditsListRow.generated.h"

USTRUCT(BlueprintType)
struct HELIOS_API FCreditsListRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    FCreditsListRow();
};

