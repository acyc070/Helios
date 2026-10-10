#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BIKRigJointConstraint.generated.h"

class UBIKRig;

UCLASS(Abstract, Blueprintable)
class BIKRIG_API UBIKRigJointConstraint : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 JointIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName JointName;
    
    UBIKRigJointConstraint();

    UFUNCTION(BlueprintPure)
    FName GetBoneName(UBIKRig* Rig) const;
    
};

