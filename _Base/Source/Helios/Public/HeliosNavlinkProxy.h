#pragma once
#include "CoreMinimal.h"
#include "HeliosActor.h"
#include "Templates/SubclassOf.h"
#include "HeliosNavlinkProxy.generated.h"

class AHeliosNavlinkProxy;
class UHeliosNavlinkComponent;

UCLASS(Blueprintable)
class HELIOS_API AHeliosNavlinkProxy : public AHeliosActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHeliosNavlinkComponent* mNavlinkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHeliosNavlinkProxy> mDeprecatedBy;
    
    AHeliosNavlinkProxy(const FObjectInitializer& ObjectInitializer);

};

