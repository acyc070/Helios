#pragma once
#include "CoreMinimal.h"
#include "AIActionPattern.h"
#include "LocomotionState.h"
#include "LocomotionModeAction.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API ULocomotionModeAction : public UAIActionPattern {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocomotionState mLocomotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mRestorePreviousWhenTerminated;
    
    ULocomotionModeAction();

};

