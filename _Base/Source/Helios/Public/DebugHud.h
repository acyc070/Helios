#pragma once
#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "DebugHud.generated.h"

UCLASS(Blueprintable, NonTransient)
class ADebugHud : public AHUD {
    GENERATED_BODY()
public:
    ADebugHud(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    static bool IsShippingGame();
    
    UFUNCTION(BlueprintCallable)
    static FString GetPlatformString();
    
    UFUNCTION(BlueprintCallable)
    static FString GetGameVersion();
    
};

