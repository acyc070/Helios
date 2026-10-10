#pragma once
#include "CoreMinimal.h"
#include "EIKTaskIdentifier.h"
#include "AIReactivePattern.h"
#include "EHeightLevel.h"
#include "TeacherGrabPattern.generated.h"

class AActor;
class UAnimSequenceBase;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UTeacherGrabPattern : public UAIReactivePattern {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mMaxDistanceGrab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mMinDistanceBite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mCloseDistanceGrab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHeightLevel, EIKTaskIdentifier> mHandledLevelsIKID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mIKTaskBlendout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mAttemptFinishedNotify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* mOverrideGrabAnimation;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* mTarget;
    
public:
    UTeacherGrabPattern();

};

