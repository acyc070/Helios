#pragma once
#include "CoreMinimal.h"
#include "AIAnimInstance.h"
#include "AnimShootingData.h"
#include "HunterAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class HELIOS_API UHunterAnimInstance : public UAIAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimShootingData mShootingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mIsAiming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mUseQuickAim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mIsTerminatorModeActive;
    
public:
    UHunterAnimInstance();

};

