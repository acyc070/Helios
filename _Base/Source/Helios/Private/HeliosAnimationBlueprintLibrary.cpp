#include "HeliosAnimationBlueprintLibrary.h"

UHeliosAnimationBlueprintLibrary::UHeliosAnimationBlueprintLibrary() {
}

FTransform UHeliosAnimationBlueprintLibrary::ExtractRootMotion(const UAnimSequence* AnimationSequence, float StartTime, float DeltaTime, bool bAllowLooping) {
    return FTransform{};
}


