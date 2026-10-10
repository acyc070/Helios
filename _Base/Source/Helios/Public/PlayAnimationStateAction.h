#pragma once
#include "CoreMinimal.h"
#include "AIActionPattern.h"
#include "AIAnimStateOptions.h"
#include "CustomAnimationOptions.h"
#include "EPlayAnimStateTargetUpdateMode.h"
#include "SoftEnumName.h"
#include "PlayAnimationStateAction.generated.h"

class AActor;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UPlayAnimationStateAction : public UAIActionPattern {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftEnumName mAnimState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* mTowardsActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayAnimStateTargetUpdateMode mTargetUpdateMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIAnimStateOptions mPlayOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mUseCustomAnimationOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomAnimationOptions mCustomAnimationOptions;
    
    UPlayAnimationStateAction();

private:
    UFUNCTION()
    void OnAnimationDone(FName Name);
    
};

