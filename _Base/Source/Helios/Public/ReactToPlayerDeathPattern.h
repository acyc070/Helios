#pragma once
#include "CoreMinimal.h"
#include "AIReactivePattern.h"
#include "ReactToPlayerDeathPattern.generated.h"

class AControlledPawn;
class UAINavigationOptionsData;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UReactToPlayerDeathPattern : public UAIReactivePattern {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mDefaultReactionAnimationState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mCheckOnPlayerAnimationState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mKilledByEnemyReactionAnimationState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAINavigationOptionsData* mNavigationOptions;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AControlledPawn* mPlayerPawn;
    
public:
    UReactToPlayerDeathPattern();

};

