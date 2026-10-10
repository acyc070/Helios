#pragma once
#include "CoreMinimal.h"
#include "AIScriptedOrderThatIsSmartPointCompatible.h"
#include "CharacterAnimStateTransitions.h"
#include "EMovementRestriction.h"
#include "EPawnType.h"
#include "Templates/SubclassOf.h"
#include "AIScriptedInteractiveStateOrder.generated.h"

class AHeliosP2PInteraction;
class UAnimSequenceBase;
class UBlendSpaceBase;

UCLASS(Blueprintable, EditInlineNew)
class HELIOS_API UAIScriptedInteractiveStateOrder : public UAIScriptedOrderThatIsSmartPointCompatible {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InteractionIsParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHeliosP2PInteraction* InteractionToEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHeliosP2PInteraction> InteractionToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* InteractiveStateAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpaceBase* InteractiveStateBlendSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMovementRestriction movementRestriction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterAnimStateTransitions AnimationTransitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPawnType TowardsPawn;
    
    UAIScriptedInteractiveStateOrder();

};

