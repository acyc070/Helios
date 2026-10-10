#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FlowControlAnimNotifyData.h"
#include "DeathHandler.generated.h"

class AController;
class UDeathHandlerDataAsset;
class UDeathHandlerScript;
class UWorld;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HELIOS_API UDeathHandler : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDeathHandlerDataAsset* mDeathHandlingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UDeathHandlerScript* mScriptInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AController* mControllerToRespawnPlayerWith;
    
public:
    UDeathHandler(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnWorldSoftReloadCompleted(UWorld* World);
    
    UFUNCTION()
    void OnFlowControlAnimNotify(const FFlowControlAnimNotifyData& notifyData);
    
public:
    UFUNCTION()
    void ConfirmKill();
    
};

