#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EBedLiftingSide.h"
#include "EBedLiftingState.h"
#include "BedLiftingAnimInterface.generated.h"

UINTERFACE(Blueprintable)
class HELIOS_API UBedLiftingAnimInterface : public UInterface {
    GENERATED_BODY()
};

class HELIOS_API IBedLiftingAnimInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetBedLiftingState(EBedLiftingState State);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetBedLiftingSide(EBedLiftingSide Side);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetBedLiftingInCantReach(bool InCantReach);
    
};

