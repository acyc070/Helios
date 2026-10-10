#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AIActionPattern.h"
#include "LocomotionState.h"
#include "GoInvestigateLocationAction.generated.h"

class UAINavigationOptionsData;
class UAnimSequenceBase;
class UMoveToLocationAction;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UGoInvestigateLocationAction : public UAIActionPattern {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector mLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* mAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mGoalRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocomotionState mLocomotionState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAINavigationOptionsData* mNavOptions;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMoveToLocationAction* mMovePattern;
    
public:
    UGoInvestigateLocationAction();

    UFUNCTION(BlueprintCallable)
    void AdjustInvestigationLocation(const FVector& Location);
    
};

