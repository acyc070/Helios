#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EAbilityOverrideType.h"
#include "AbilitySetOverride.generated.h"

USTRUCT(BlueprintType)
struct FAbilitySetOverride {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EAbilityOverrideType mCategories[9];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EAbilityOverrideType mGrabs[6];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EAbilityOverrideType mJumps[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EAbilityOverrideType mLocomotion[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EAbilityOverrideType mSlides[2];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EAbilityOverrideType mTouch[2];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EAbilityOverrideType mLookAt[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAbilityOverrideType mCommunication;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EAbilityOverrideType mPickups[5];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EAbilityOverrideType mOther[22];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mWalkStartRatioOverride;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float mLocomotionSpeed[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float mLocomotionAcceleration[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float mLocomotionRotationRate[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D mJumpModifier;
    
    HELIOS_API FAbilitySetOverride();
};

