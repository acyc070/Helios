#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TVChannelReference.generated.h"

USTRUCT(BlueprintType)
struct HELIOS_API FTVChannelReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle mChannel;
    
    FTVChannelReference();
};

