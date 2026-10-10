#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "PlayerStateKosmos.generated.h"

class APawn;

UCLASS(Blueprintable)
class KOSMOSGAMEPLAY_API APlayerStateKosmos : public APlayerState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    APawn* PlayerPawn;
    
public:
    APlayerStateKosmos(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(Reliable, Server, WithValidation)
    void KosmosDebugCmdServer(const FString& InCmdStr);
    
public:
    UFUNCTION(Exec)
    void KosmosDebugCmdLocal(const FString& InCmdStr);
    
private:
    UFUNCTION(NetMulticast, Reliable)
    void KosmosDebugCmdClient(const FString& InCmdStr);
    
public:
    UFUNCTION(Exec)
    void KosmosDebugCmd(const FString& InCmdStr);
    
};

