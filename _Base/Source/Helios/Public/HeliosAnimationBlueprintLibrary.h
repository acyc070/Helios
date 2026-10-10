#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "HeliosAnimationBlueprintLibrary.generated.h"

class UAnimSequence;

UCLASS(Blueprintable)
class HELIOS_API UHeliosAnimationBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UHeliosAnimationBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static FTransform ExtractRootMotion(const UAnimSequence* AnimationSequence, float StartTime, float DeltaTime, bool bAllowLooping);
    
};

