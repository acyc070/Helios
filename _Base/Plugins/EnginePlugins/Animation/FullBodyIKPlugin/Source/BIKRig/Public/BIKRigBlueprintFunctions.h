#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BIKRigNodeInput.h"
#include "BIKRigBlueprintFunctions.generated.h"

class AActor;

UCLASS(Blueprintable)
class BIKRIG_API UBIKRigBlueprintFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBIKRigBlueprintFunctions();

    UFUNCTION(BlueprintCallable)
    static FVector GetLocalMovementVector(AActor* Owner, FVector MovementInput);
    
    UFUNCTION(BlueprintPure)
    static FBIKRigNodeInput FindBIKRigSolverComponentAndGoals(const AActor* Actor);
    
};

