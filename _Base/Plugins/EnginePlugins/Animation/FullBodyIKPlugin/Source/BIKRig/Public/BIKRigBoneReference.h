#pragma once
#include "CoreMinimal.h"
#include "BIKRigBoneReference.generated.h"

USTRUCT(BlueprintType)
struct BIKRIG_API FBIKRigBoneReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    FBIKRigBoneReference();
};

