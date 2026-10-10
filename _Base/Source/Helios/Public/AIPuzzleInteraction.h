#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AIActionPattern.h"
#include "AbilitySetOverride.h"
#include "FlowControlAnimNotifyData.h"
#include "AIPuzzleInteraction.generated.h"

class APuzzlePieceActor;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UAIPuzzleInteraction : public UAIActionPattern {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APuzzlePieceActor* mPuzzlePiece;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mHackProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mUseGrabAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mGrabCompleteNotifyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mUseAbilitySetOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbilitySetOverride mAbilitySetOverride;
    
    UAIPuzzleInteraction();

private:
    UFUNCTION()
    void NotifyGrabComplete(const FFlowControlAnimNotifyData& AnimNotify);
    
public:
    UFUNCTION()
    void InterpolationCompleted(float finalProgress);
    
    UFUNCTION(BlueprintNativeEvent)
    void CalculateInteractionLocation(FVector& OutLocation, FVector& outForward);
    
};

