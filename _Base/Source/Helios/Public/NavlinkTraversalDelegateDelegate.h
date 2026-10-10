#pragma once
#include "CoreMinimal.h"
#include "NavlinkTraversalDelegateDelegate.generated.h"

class APawn;
class UChalkboardWrapper;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FNavlinkTraversalDelegate, APawn*, Pawn, UChalkboardWrapper*, NavChalkboard);

