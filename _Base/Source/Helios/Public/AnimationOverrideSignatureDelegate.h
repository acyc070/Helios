#pragma once
#include "CoreMinimal.h"
#include "AnimationOverrideSignatureDelegate.generated.h"

class UAnimationAsset;
class UAnimationControlComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAnimationOverrideSignature, UAnimationControlComponent*, animComp, UAnimationAsset*, AnimAsset);

