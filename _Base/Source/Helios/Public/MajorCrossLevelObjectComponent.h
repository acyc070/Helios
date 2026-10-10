#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CLOProxiesForActor.h"
#include "MajorCrossLevelObjectComponent.generated.h"

class AActor;
class ACrossLevelObjectProxy;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HELIOS_API UMajorCrossLevelObjectComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<ACrossLevelObjectProxy>> mProxies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCLOProxiesForActor> mGenericProxies;
    
public:
    UMajorCrossLevelObjectComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ForceMajorCLORespawn(AActor* actorImplementingCLOProxyInterface);
    
};

