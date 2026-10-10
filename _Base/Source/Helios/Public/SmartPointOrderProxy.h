#pragma once
#include "CoreMinimal.h"
#include "CharacterAudioEvent.h"
#include "SmartPointOrderProxy.generated.h"

class UAIScriptedOrderThatIsSmartPointCompatible;

USTRUCT(BlueprintType)
struct HELIOS_API FSmartPointOrderProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName optionalCustomID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName optionalCustomAudioID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterAudioEvent mCharacterAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIScriptedOrderThatIsSmartPointCompatible* mOrder;
    
    FSmartPointOrderProxy();
};

