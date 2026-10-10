#pragma once
#include "CoreMinimal.h"
#include "TarGameInstance.h"
#include "EHeliosGameState.h"
#include "HeliosGameInstance.generated.h"

class UFiniteStateMachine;

UCLASS(Blueprintable, NonTransient)
class HELIOS_API UHeliosGameInstance : public UTarGameInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFiniteStateMachine*> mStateMachines;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EHeliosGameState mGameState;
    
public:
    UHeliosGameInstance();

    UFUNCTION(BlueprintCallable)
    void SetGameState(EHeliosGameState NewState);
    
private:
    UFUNCTION()
    void OnApplicationStateChange(bool activated);
    
    UFUNCTION()
    void GetCurrentAreaForPlayer(FString& areaName);
    
};

