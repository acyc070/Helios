#pragma once
#include "CoreMinimal.h"
#include "HeliosInteraction.h"
#include "HeliosP2PInteraction.generated.h"

class APawn;

UCLASS(Blueprintable)
class HELIOS_API AHeliosP2PInteraction : public AHeliosInteraction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APawn* mInitiator;
    
public:
    AHeliosP2PInteraction(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetupPawnToPawnInteraction(APawn* initiator);
    
};

