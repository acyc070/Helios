#pragma once
#include "CoreMinimal.h"
#include "CharacterAnimStateContext.h"
#include "CharacterAnimStateTransitions.h"
#include "CharacterAnimStateVariation.h"
#include "EAnimationLayering.h"
#include "EMovementRestriction.h"
#include "IdleAnimationSetupData.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct HELIOS_API FIdleAnimationSetupData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Enabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimationLayering Layering;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Additive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMovementRestriction RootMotionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterAnimStateContext Context;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterAnimStateVariation Variation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterAnimStateTransitions Transitions;
    
    FIdleAnimationSetupData();
};

