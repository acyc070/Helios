#pragma once
#include "CoreMinimal.h"
#include "SocketSelector.h"
#include "AttachPointSetup.generated.h"

USTRUCT(BlueprintType)
struct HELIOS_API FAttachPointSetup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSocketSelector mSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mAttachRadius;
    
    FAttachPointSetup();
};

