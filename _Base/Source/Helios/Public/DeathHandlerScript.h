#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "DeathHandlerScript.generated.h"

class AControlledPawn;

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class HELIOS_API UDeathHandlerScript : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mCountsAsAchievementDeath;
    
    UDeathHandlerScript();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void UpdatePreDeath(float DeltaTime);
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdatePostDeath(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void Ragdoll();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPawnStartedDying();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPawnRagdolling();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDeathAnimationComplete();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAnimNotify(FName AnimNotify);
    
public:
    UFUNCTION(BlueprintPure)
    AControlledPawn* GetDyingPawn() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetDeathWorldDirection() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ConfirmKill();
    
};

