#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Character.h"
#include "ENinjaGravityDirectionMode.h"
#include "NinjaCharacter.generated.h"

UCLASS(Blueprintable)
class NINJACHARACTER_API ANinjaCharacter : public ACharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCapsuleRotatesControlRotation: 1;
    
    ANinjaCharacter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void LaunchCharacterRotated(FVector LaunchVelocity, bool bHorizontalOverride, bool bVerticalOverride);
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnGravityDirectionChanged(ENinjaGravityDirectionMode OldGravityDirectionMode, ENinjaGravityDirectionMode CurrentGravityDirectionMode);
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnCharMovementAxisChanged(const FVector& OldAxisZ, const FVector& CurrentAxisZ);
    
};

