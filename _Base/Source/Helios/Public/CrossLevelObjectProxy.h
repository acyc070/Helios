#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CrossLevelObjectProxyInterface.h"
#include "CrossLevelObjectProxy.generated.h"

UCLASS(Blueprintable)
class HELIOS_API ACrossLevelObjectProxy : public AActor, public ICrossLevelObjectProxyInterface {
    GENERATED_BODY()
public:
    ACrossLevelObjectProxy(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

