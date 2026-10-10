#pragma once
#include "CoreMinimal.h"
#include "EAnimOverrideType.h"
#include "EAnimationOverrideEvents.h"
#include "EBlendSpaceOverrideType.h"
#include "GenericPawnEvent.h"
#include "AnimationOverrideEvent.generated.h"

class UAnimSequenceBase;
class UBlendSpaceBase;

USTRUCT(BlueprintType)
struct HELIOS_API FAnimationOverrideEvent : public FGenericPawnEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimationOverrideEvents mAnimationOverrideEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimOverrideType mSequenceOverrideType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlendSpaceOverrideType mBlendspaceOverrideType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* mAnimSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpaceBase* mBlendspace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mAnimID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mLoopCount;
    
    FAnimationOverrideEvent();
};

