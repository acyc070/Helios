#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EAnimOverrideType.h"
#include "EBlendSpaceOverrideType.h"
#include "EWalkStopOverrideType.h"
#include "WalkStopAnimSet.h"
#include "CharacterAnimationSlotInfo.generated.h"

class UAnimSequenceBase;
class UBlendSpaceBase;

USTRUCT(BlueprintType)
struct HELIOS_API FCharacterAnimationSlotInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAnimOverrideType, UAnimSequenceBase*> mAnimationsPerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBlendSpaceOverrideType, UBlendSpaceBase*> mBlendspacePerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWalkStopOverrideType, FWalkStopAnimSet> mWalkStopOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<EAnimOverrideType> mDisabledAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<EBlendSpaceOverrideType> mDisabledBlendSpaces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideDefaultBlendSpaceValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D mDefaultBlendSpaceValues;
    
    FCharacterAnimationSlotInfo();
};

