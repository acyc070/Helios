#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AnimationOverrideHandle.h"
#include "AnimationOverrideBlueprintLibrary.generated.h"

UCLASS(Blueprintable)
class HELIOS_API UAnimationOverrideBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAnimationOverrideBlueprintLibrary();

    UFUNCTION(BlueprintPure)
    static bool IsValid(const FAnimationOverrideHandle& Handle);
    
    UFUNCTION(BlueprintCallable)
    static void ClearOverride(UPARAM(Ref) FAnimationOverrideHandle& Handle);
    
};

