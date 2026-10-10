#pragma once
#include "CoreMinimal.h"
#include "HeliosNavlinkContext.generated.h"

class AGrabbableLedgeActor;
class UGrabbableLedgeComponent;

USTRUCT(BlueprintType)
struct HELIOS_API FHeliosNavlinkContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGrabbableLedgeActor* mLedge1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGrabbableLedgeActor* mLedge2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UGrabbableLedgeComponent> mLedgeComponent;
    
    FHeliosNavlinkContext();
};

