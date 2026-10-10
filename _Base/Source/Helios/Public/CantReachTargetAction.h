#pragma once
#include "CoreMinimal.h"
#include "AIActionPattern.h"
#include "CantReachTargetAction.generated.h"

class AActor;
class UPlayAnimationStateAction;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UCantReachTargetAction : public UAIActionPattern {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mCantReachAnimStateName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mCantReachAnimMaxDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mUseCanGrabEvaluation;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* mTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPlayAnimationStateAction* mCantReachAnimAction;
    
public:
    UCantReachTargetAction();

};

