#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AILookOptions.h"
#include "AIReactivePattern.h"
#include "ELookAtType.h"
#include "LookAtSpecificTypePattern.generated.h"

class UAnimSequenceBase;
class ULookAtPoint;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API ULookAtSpecificTypePattern : public UAIReactivePattern {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELookAtType mType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mVisionSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mEnableDynamicFOVAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mFOVAngle;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval mDynamicFOVAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAILookOptions mLookOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mUseOverrideAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* mOverrideStandIdleAnimation;
    
public:
    ULookAtSpecificTypePattern();

protected:
    UFUNCTION(BlueprintPure)
    ULookAtPoint* GetBestLookAtPoint() const;
    
};

