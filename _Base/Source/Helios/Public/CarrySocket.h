#pragma once
#include "CoreMinimal.h"
#include "SocketSelector.h"
#include "CarrySocket.generated.h"

USTRUCT(BlueprintType)
struct HELIOS_API FCarrySocket {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSocketSelector mSocket;
    
    FCarrySocket();
};

