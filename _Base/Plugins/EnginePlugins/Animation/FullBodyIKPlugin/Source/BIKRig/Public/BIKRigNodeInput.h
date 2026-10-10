#pragma once
#include "CoreMinimal.h"
#include "BIKRigNodeInput.generated.h"

class UBIKRigGoalComponent;
class UBIKRigSolverComponent;

USTRUCT(BlueprintType)
struct FBIKRigNodeInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBIKRigSolverComponent* SolverComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UBIKRigGoalComponent*> GoalComponents;
    
    BIKRIG_API FBIKRigNodeInput();
};

