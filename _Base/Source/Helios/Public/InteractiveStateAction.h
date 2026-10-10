#pragma once
#include "CoreMinimal.h"
#include "AIActionPattern.h"
#include "EMovementRestriction.h"
#include "Templates/SubclassOf.h"
#include "InteractiveStateAction.generated.h"

class AActor;
class AHeliosP2PInteraction;
class UAnimSequenceBase;
class UBlendSpaceBase;
class UPlayAnimationStateAction;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UInteractiveStateAction : public UAIActionPattern {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHeliosP2PInteraction* mActivateP2PInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHeliosP2PInteraction> mSpawnP2PInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* mStandbyLoopAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpaceBase* mStandbyLoopBlendSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMovementRestriction mMovementRestriction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* mTowardsActor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHeliosP2PInteraction* mP2PInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPlayAnimationStateAction* mStandByAnimationStateAction;
    
public:
    UInteractiveStateAction();

};

