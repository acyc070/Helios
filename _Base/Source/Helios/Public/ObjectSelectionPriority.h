#pragma once
#include "CoreMinimal.h"
#include "EObjectPriorityType.h"
#include "ObjectSelectionPriority.generated.h"

USTRUCT(BlueprintType)
struct FObjectSelectionPriority {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EObjectPriorityType mObjectSelectionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mSelectionPriorityName;
    
    HELIOS_API FObjectSelectionPriority();
};

