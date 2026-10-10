#pragma once
#include "CoreMinimal.h"
#include "HeliosPlayerStart.h"
#include "PLVLInitialPlayerStart.generated.h"

UCLASS(Blueprintable)
class HELIOS_API APLVLInitialPlayerStart : public AHeliosPlayerStart {
    GENERATED_BODY()
public:
    APLVLInitialPlayerStart(const FObjectInitializer& ObjectInitializer);

};

