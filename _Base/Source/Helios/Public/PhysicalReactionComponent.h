#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EMovementRestriction.h"
#include "MovementControllerInterface.h"
#include "PhysicalReactionComponent.generated.h"

class AActor;
class UAnimMetaData;
class UAnimationOverrideComponent;
class UAnimationSetupComponent;
class UFlowControlComponent;
class UTarAnimationListenerComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HELIOS_API UPhysicalReactionComponent : public UActorComponent, public IMovementControllerInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMovementRestriction mMovementMode;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFlowControlComponent* mFlowControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAnimationSetupComponent* mAnimSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAnimationOverrideComponent* mAnimOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTarAnimationListenerComponent* mAnimListener;
    
public:
    UPhysicalReactionComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnPhysicalReactionStarted(AActor* notifier, const FName& NotifyName, const TArray<UAnimMetaData*>& AnimMetaData);
    
    UFUNCTION()
    void OnPhysicalReactionFinished(AActor* notifier, const FName& NotifyName, const TArray<UAnimMetaData*>& AnimMetaData);
    

    // Fix for true pure virtual functions not being implemented
};

