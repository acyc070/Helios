#pragma once
#include "CoreMinimal.h"
#include "EIKTaskIdentifier.h"
#include "AIActionPattern.h"
#include "EHeightLevel.h"
#include "AttemptGrabAction.generated.h"

class AActor;
class UAnimSequenceBase;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UAttemptGrabAction : public UAIActionPattern {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIKTaskIdentifier mIKIDTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mIKTaskBlendout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* mTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHeightLevel mGrabLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mIsCloseDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mIsBlockedGrab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mAttemptFinishedNotify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* mOverrideGrabAnimation;
    
    UAttemptGrabAction();

};

