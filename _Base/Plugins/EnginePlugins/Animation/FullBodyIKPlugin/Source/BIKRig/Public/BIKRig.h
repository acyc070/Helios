#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BIKRig.generated.h"

class UBIKRigJointBody;
class UBIKRigJointConstraint;
class USkeletalMesh;
class USkeleton;

UCLASS(Blueprintable)
class BIKRIG_API UBIKRig : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeleton* Skeleton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBIKRigJointConstraint*> JointConstraints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBIKRigJointBody*> JointBodies;
    
public:
    UBIKRig();

};

