#pragma once
#include "CoreMinimal.h"
#include "KosmosBIKExposeTaskStruct.generated.h"

USTRUCT(BlueprintType)
struct FKosmosBIKExposeTaskStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TaskName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExposeTaskOnNode;
    
    KOSMOSBIK_API FKosmosBIKExposeTaskStruct();
};

