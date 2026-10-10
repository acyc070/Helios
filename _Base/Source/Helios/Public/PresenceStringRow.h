#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EPresenceString.h"
#include "PresenceStringRow.generated.h"

USTRUCT(BlueprintType)
struct FPresenceStringRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPresenceString PresenceStringEnum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PresenceStringLoc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PresenceStringXboxTag;
    
    HELIOS_API FPresenceStringRow();
};

