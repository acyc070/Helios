#pragma once
#include "CoreMinimal.h"
#include "SmoothAlignmentCompletedComponentDelegate.generated.h"

class USceneComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSmoothAlignmentCompletedComponent, USceneComponent*, Component);

