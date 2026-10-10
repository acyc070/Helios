#pragma once
#include "CoreMinimal.h"
#include "OnChalkboardDataReloadedDelegate.generated.h"

class UChalkboardWrapper;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChalkboardDataReloaded, UChalkboardWrapper*, chalkboard);

