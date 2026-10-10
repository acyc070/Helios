#pragma once
#include "CoreMinimal.h"
#include "CharacterAnimStateTransitions.h"
#include "EMovementRestriction.h"
#include "CustomAnimationOptions.generated.h"

class UAnimSequenceBase;
class UBlendSpaceBase;

USTRUCT(BlueprintType)
struct HELIOS_API FCustomAnimationOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* mAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpaceBase* mBlendspace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMovementRestriction mMovementRestriction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterAnimStateTransitions mTransitions;
    
    FCustomAnimationOptions();
};

