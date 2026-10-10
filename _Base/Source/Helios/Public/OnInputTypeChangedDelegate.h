#pragma once
#include "CoreMinimal.h"
#include "EHeliosInputScheme.h"
#include "EHeliosInputType.h"
#include "OnInputTypeChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInputTypeChanged, EHeliosInputType, newInputType, EHeliosInputScheme, newInputScheme);

