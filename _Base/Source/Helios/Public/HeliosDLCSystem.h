#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EHeliosDLC.h"
#include "HeliosDLCSystem.generated.h"

UCLASS(Blueprintable)
class HELIOS_API UHeliosDLCSystem : public UObject {
    GENERATED_BODY()
public:
    UHeliosDLCSystem();

protected:
    UFUNCTION()
    void OnGameIsUnsuspending();
    
    UFUNCTION()
    void OnGameIsEnteringForeground();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsDLCEnabled(EHeliosDLC dlc) const;
    
    UFUNCTION(BlueprintCallable)
    void DebugEnableDLC(EHeliosDLC dlc);
    
    UFUNCTION(BlueprintCallable)
    void DebugEnableAllDLC();
    
    UFUNCTION(BlueprintCallable)
    void DebugDisableDLC(EHeliosDLC dlc);
    
    UFUNCTION(BlueprintCallable)
    void DebugDisableAllDLC();
    
};

