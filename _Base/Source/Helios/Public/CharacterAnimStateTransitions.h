#pragma once
#include "CoreMinimal.h"
#include "CharacterAnimStateTransitions.generated.h"

class UAnimationAsset;

USTRUCT(BlueprintType)
struct HELIOS_API FCharacterAnimStateTransitions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* EnterAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* ExitAnimation;
    
    FCharacterAnimStateTransitions();
};

