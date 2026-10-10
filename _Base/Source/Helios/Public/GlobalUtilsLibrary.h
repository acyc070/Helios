#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GlobalUtilsLibrary.generated.h"

class UPrimitiveComponent;

UCLASS(Blueprintable)
class HELIOS_API UGlobalUtilsLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGlobalUtilsLibrary();

    UFUNCTION(BlueprintCallable)
    void SetVelocitySolverIterationCount(UPrimitiveComponent* PrimitiveComponent, int32 newCount);
    
    UFUNCTION(BlueprintCallable)
    void SetPositionSolverIterationCount(UPrimitiveComponent* PrimitiveComponent, int32 newCount);
    
};

