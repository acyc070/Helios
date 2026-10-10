#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "TarsierDebug.generated.h"

class AActor;

UCLASS(Blueprintable)
class HELIOS_API UTarsierDebug : public UObject {
    GENERATED_BODY()
public:
    UTarsierDebug();

private:
    UFUNCTION(BlueprintCallable)
    static void DisplayDockRenderInterface(AActor* Actor, const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    static void DebugShowDebugTextWithColor(const FVector& Location, const FString& DisplayText, const FColor& Color, float durationSeconds);
    
    UFUNCTION(BlueprintCallable)
    static void DebugShowDebugText(const FVector& Location, const FString& DisplayText, float durationSeconds);
    
    UFUNCTION(BlueprintCallable)
    static void DebugAddActorDebugText(AActor* Actor, const FString& string);
    
    UFUNCTION(BlueprintCallable)
    static void ActivateActorDebug(AActor* Actor);
    
};

