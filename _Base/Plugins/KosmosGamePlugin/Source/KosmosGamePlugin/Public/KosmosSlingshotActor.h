#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Templates/SubclassOf.h"
#include "KosmosSlingshotActor.generated.h"

class AKosmosSlingshotProjectile;
class UPickupComponent;
class UTargetComponent;
class UUsableObjectComponent;

UCLASS(Blueprintable, Config=Game)
class AKosmosSlingshotActor : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAction, float, power);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AKosmosSlingshotProjectile> ProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUsableObjectComponent* UsableObjectComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPickupComponent* PickupComponent;
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAction UserHasFired;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAction SlingshotWindingUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BigShotTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FireCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WindingUpTime;
    
public:
    AKosmosSlingshotActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void IsSlingshotWindingUp(bool& yesno, float& WindupPercent);
    
    UFUNCTION(BlueprintCallable)
    bool IsSlingshotWindedUp();
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<UTargetComponent> GetMainTarget();
    
protected:
    UFUNCTION(BlueprintCallable)
    void GetAnimationData(float& leftright, float& updown, float& Delta, bool& IsTargeting, float& WindupPercent);
    
public:
    UFUNCTION(BlueprintCallable)
    AKosmosSlingshotProjectile* Fire(const FVector& FireVelocity);
    
protected:
    UFUNCTION()
    void EndPress(AActor* me);
    
    UFUNCTION()
    void BeginPress(AActor* me);
    
};

