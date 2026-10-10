#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CrossLevelObjectWakeInterface.generated.h"

UINTERFACE(Blueprintable)
class UCrossLevelObjectWakeInterface : public UInterface {
    GENERATED_BODY()
};

class ICrossLevelObjectWakeInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    void OnCLOEnabled();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnCLODisabled();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnCLOComponentWake();
    
};

