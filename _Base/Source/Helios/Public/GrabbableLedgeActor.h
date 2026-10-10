#pragma once
#include "CoreMinimal.h"
#include "HeliosActor.h"
#include "GrabbableLedgeActor.generated.h"

class UGrabbableLedgeComponent;

UCLASS(Blueprintable)
class HELIOS_API AGrabbableLedgeActor : public AHeliosActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGrabbableLedgeComponent* mLedgeComponent;
    
    AGrabbableLedgeActor(const FObjectInitializer& ObjectInitializer);

};

