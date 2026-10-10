#pragma once
#include "CoreMinimal.h"
#include "OnlineLogoutResultDelegate2.generated.h"

class APlayerController;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnlineLogoutResult, APlayerController*, PlayerController);

