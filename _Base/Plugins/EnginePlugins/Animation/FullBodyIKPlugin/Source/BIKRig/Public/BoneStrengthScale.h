#pragma once
#include "CoreMinimal.h"
#include "BIKRigBoneReference.h"
#include "BoneStrengthScale.generated.h"

USTRUCT(BlueprintType)
struct FBoneStrengthScale {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBIKRigBoneReference Bone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TranslationStrengthScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OrientationStrengthScale;
    
    BIKRIG_API FBoneStrengthScale();
};

