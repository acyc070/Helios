#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ProxyCLOCatchingData.h"
#include "CrossLevelObjectProxyInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable)
class HELIOS_API UCrossLevelObjectProxyInterface : public UInterface {
    GENERATED_BODY()
};

class HELIOS_API ICrossLevelObjectProxyInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    void RespawnCrossLevelObjectAtProxy(AActor* clo);
    
    UFUNCTION(BlueprintNativeEvent)
    bool IsProxyAvailable() const;
    
    UFUNCTION(BlueprintNativeEvent)
    FName GetProxyName() const;
    
    UFUNCTION(BlueprintNativeEvent)
    FProxyCLOCatchingData GetProxyCLOCatchingData() const;
    
};

