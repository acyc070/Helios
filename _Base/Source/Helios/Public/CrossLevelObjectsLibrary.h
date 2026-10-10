#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CrossLevelObjectsLibrary.generated.h"

class ICrossLevelObjectProxyInterface;
class UCrossLevelObjectProxyInterface;

UCLASS(Blueprintable)
class UCrossLevelObjectsLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCrossLevelObjectsLibrary();

    UFUNCTION(BlueprintCallable)
    static void NotifyProxyAvailability(TScriptInterface<ICrossLevelObjectProxyInterface> Proxy);
    
};

