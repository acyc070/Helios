#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CharacterAnimStateGroup.h"
#include "CharacterAnimStateSetup.h"
#include "CharacterLocomotionSetup.h"
#include "CharacterPhysicalReactionSetup.h"
#include "SoftEnumName.h"
#include "AnimationSetupComponent.generated.h"

class UAnimationSetupComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HELIOS_API UAnimationSetupComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DefaultLocomotionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftEnumName DefaultLocomotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterLocomotionSetup> LocomotionModes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterAnimStateSetup> States;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterAnimStateGroup> StateGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterPhysicalReactionSetup> PhysicalReactions;
    
    UAnimationSetupComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetupAnimationStates_Blueprint(const TArray<FCharacterAnimStateSetup>& animStates, UAnimationSetupComponent*& setupComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetupAnimationState_Blueprint(FCharacterAnimStateSetup animStateSetup, UAnimationSetupComponent*& setupComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultLocomotion(FName LocomotionName);
    
};

