#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GestureData.h"
#include "GestureOverrideInterface.generated.h"

class UGestureInterface;

UINTERFACE(Blueprintable)
class HELIOS_API UGestureOverrideInterface : public UInterface {
    GENERATED_BODY()
};

class HELIOS_API IGestureOverrideInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    void OnGestureTriggered(UGestureInterface* GestureInterface);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnGestureTick(UGestureInterface* GestureInterface, float DeltaTime);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnGestureFinished(UGestureInterface* GestureInterface);
    
    UFUNCTION(BlueprintNativeEvent)
    FGestureData GetGestureData();
    
};

