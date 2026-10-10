#pragma once
#include "CoreMinimal.h"
#include "OnPathChangedDelegate.generated.h"

class UPathFindingComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPathChanged, UPathFindingComponent*, Path);

