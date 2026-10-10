#pragma once
#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "EAchievement.h"
#include "AchievementSystem.generated.h"

UCLASS(Blueprintable)
class HELIOS_API UAchievementSystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
    UAchievementSystem();

    UFUNCTION(BlueprintCallable)
    bool RequestUnlockAchievement(EAchievement achievement);
    
protected:
    UFUNCTION()
    void OnSetUser();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsAchievementUnlockedPlatform(EAchievement achievement);
    
    UFUNCTION(BlueprintCallable)
    bool IsAchievementUnlockedLocal(EAchievement achievement);
    
    UFUNCTION(BlueprintCallable)
    bool IncrementAchievementReference(EAchievement achievement, const FName& reference);
    
    UFUNCTION(BlueprintCallable)
    bool IncrementAchievementCount(EAchievement achievement, int32 Amount);
    
    UFUNCTION(BlueprintCallable)
    void GetAchievementProgress(EAchievement achievement, int32& Count, int32& Target);
    
    UFUNCTION(BlueprintCallable)
    bool ForceUnlockAchievement(EAchievement achievement);
    
};

