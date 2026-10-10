#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SmartPointForTVPPInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable)
class HELIOS_API USmartPointForTVPPInterface : public UInterface {
    GENERATED_BODY()
};

class HELIOS_API ISmartPointForTVPPInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTVOwner(AActor* OwnerTV);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AActor* GetTVOwner();
    
};

