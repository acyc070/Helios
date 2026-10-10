#pragma once
#include "CoreMinimal.h"
#include "CLOProxiesForActor.generated.h"

class AActor;
class UObject;

USTRUCT(BlueprintType)
struct FCLOProxiesForActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> mProxiesOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UObject>> mProxies;
    
    HELIOS_API FCLOProxiesForActor();
};

