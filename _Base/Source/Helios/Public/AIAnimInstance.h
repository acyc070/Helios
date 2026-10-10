#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AIQuickTurnData.h"
#include "AdditiveAnimationData.h"
#include "AnimAttackData.h"
#include "AnimHearingData.h"
#include "CharacterCoreAnimInstance.h"
#include "OverrideBlendspaceData.h"
#include "AIAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class HELIOS_API UAIAnimInstance : public UCharacterCoreAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAIQuickTurnData mCurrentQuickTurnData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D mInputVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimAttackData mAttackData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimHearingData mHearingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOverrideBlendspaceData mOverrideBlendspaceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAdditiveAnimationData mAdditiveAnimationData;
    
public:
    UAIAnimInstance();

protected:
    UFUNCTION(BlueprintPure)
    bool ShouldWalkOrIdle() const;
    
    UFUNCTION(BlueprintPure)
    bool ShouldIdle() const;
    
    UFUNCTION(BlueprintPure)
    bool ShouldExitWalk() const;
    
    UFUNCTION(BlueprintPure)
    bool IsQuickturnAllowed() const;
    
};

