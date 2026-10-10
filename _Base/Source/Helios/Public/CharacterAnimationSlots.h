#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CharacterAnimationSlotInfo.h"
#include "EAnimOverrideType.h"
#include "EBlendSpaceOverrideType.h"
#include "EWalkStopOverrideType.h"
#include "CharacterAnimationSlots.generated.h"

class UAnimSequenceBase;
class UBlendSpaceBase;

UCLASS(Blueprintable)
class HELIOS_API UCharacterAnimationSlots : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterAnimationSlotInfo mAnimationSet;
    
    UCharacterAnimationSlots();

    UFUNCTION(BlueprintPure)
    UAnimSequenceBase* GetWalkStop(EWalkStopOverrideType animationType, float walkCycle) const;
    
    UFUNCTION(BlueprintPure)
    UBlendSpaceBase* GetBlendSpace(EBlendSpaceOverrideType animationType) const;
    
    UFUNCTION(BlueprintPure)
    UAnimSequenceBase* GetAnimation(EAnimOverrideType animationType) const;
    
};

