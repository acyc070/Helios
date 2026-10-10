#pragma once
#include "CoreMinimal.h"
#include "CameraTransformableModifier.h"
#include "Camera/CameraModifier.h"
#include "HeliosCameraLookAroundModifier.generated.h"

UCLASS(Blueprintable)
class UHeliosCameraLookAroundModifier : public UCameraModifier, public ICameraTransformableModifier {
    GENERATED_BODY()
public:
    UHeliosCameraLookAroundModifier();


    // Fix for true pure virtual functions not being implemented
};

