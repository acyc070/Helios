#pragma once
#include "CoreMinimal.h"
#include "AIScriptedOrderThatIsSmartPointCompatible.h"
#include "CharacterAnimStateTransitions.h"
#include "EMovementRestriction.h"
#include "AIScriptedAnimOrder.generated.h"

class UAnimSequenceBase;

UCLASS(Blueprintable, EditInlineNew)
class HELIOS_API UAIScriptedAnimOrder : public UAIScriptedOrderThatIsSmartPointCompatible {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMovementRestriction RootMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterAnimStateTransitions Transitions;
    
    UAIScriptedAnimOrder();

};

