#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ELookAtBlendSpaceOverrideType.h"
#include "CharacterLookAtBlendspaceSlots.generated.h"

class UBlendSpaceBase;

UCLASS(Blueprintable)
class HELIOS_API UCharacterLookAtBlendspaceSlots : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpaceBase* mLookAtBlendSpace[6];
    
public:
    UCharacterLookAtBlendspaceSlots();

    UFUNCTION(BlueprintPure)
    UBlendSpaceBase* GetBlendSpace(ELookAtBlendSpaceOverrideType animationType) const;
    
};

