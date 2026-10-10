#pragma once
#include "CoreMinimal.h"
#include "CustomIkTaskConfig.h"
#include "KosmosIKCustomTaskList.generated.h"

USTRUCT(BlueprintType)
struct KOSMOSIK_API FKosmosIKCustomTaskList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomIkTaskConfig> Tasks;
    
    FKosmosIKCustomTaskList();
};

