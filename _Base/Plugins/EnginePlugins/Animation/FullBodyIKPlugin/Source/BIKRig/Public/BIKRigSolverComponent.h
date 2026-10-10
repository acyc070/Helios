#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BIKRigSolverComponent.generated.h"

class UBIKRig;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BIKRIG_API UBIKRigSolverComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBIKRig* Rig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bResetSolvedPose;
    
    UBIKRigSolverComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ResetSolvedPose();
    
};

