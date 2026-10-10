#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KosmosIKSolverTask.h"
#include "KosmosIKSolverLookAtTask.generated.h"

USTRUCT(BlueprintType)
struct KOSMOSIK_API FKosmosIKSolverLookAtTask : public FKosmosIKSolverTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LookAtTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LookAtAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PositionTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ReduceWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseLocalLookAtAxis;
    
    FKosmosIKSolverLookAtTask();
};

