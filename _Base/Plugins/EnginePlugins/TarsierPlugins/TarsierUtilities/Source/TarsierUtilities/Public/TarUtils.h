#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EBuildType.h"
#include "EPlatform.h"
#include "TarUtils.generated.h"

UCLASS(Blueprintable)
class TARSIERUTILITIES_API UTarUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTarUtils();

    UFUNCTION(BlueprintCallable)
    static void SwitchOnPlatform(EPlatform& Platform);
    
    UFUNCTION(BlueprintCallable)
    static void SwitchOnBuildType(EBuildType& Build);
    
    UFUNCTION(BlueprintCallable)
    static void LogVisibleError(const FString& Message);
    
    UFUNCTION(BlueprintPure)
    static bool IsInEditor();
    
    UFUNCTION(BlueprintPure)
    static bool IsGamesComDemo();
    
    UFUNCTION(BlueprintPure)
    static EPlatform GetPlatform();
    
    UFUNCTION(BlueprintPure)
    static EBuildType GetBuildType();
    
    UFUNCTION(BlueprintCallable)
    static void AddOnScreenDebugMessage(int32 Channel, const FString& Message, FLinearColor Color, float Timeout);
    
};

