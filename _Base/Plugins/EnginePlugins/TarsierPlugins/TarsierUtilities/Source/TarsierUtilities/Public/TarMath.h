#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Cone.h"
#include "TarMath.generated.h"

UCLASS(Blueprintable)
class TARSIERUTILITIES_API UTarMath : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTarMath();

    UFUNCTION(BlueprintPure)
    static FVector2D RandomLocationBetween2radiuses(FVector2D Center, float MinRadius, float MaxRadius);
    
    UFUNCTION(BlueprintPure)
    static float K2_GetSignedAngleBetweenVectors(FVector A, FVector B, FVector Plane);
    
    UFUNCTION(BlueprintPure)
    static bool IsInside(const FCone& Cone, const FVector& Point);
    
    UFUNCTION(BlueprintPure)
    static float GetAngleBetweenVectors(const FVector& A, const FVector& B);
    
};

