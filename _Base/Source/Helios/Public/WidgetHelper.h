#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Types/SlateEnums.h"
#include "Input/NavigationReply.h"
#include "EHeliosGameState.h"
#include "LevelUIData.h"
#include "WidgetHelper.generated.h"

class APlayerController;
class UAkAudioEvent;
class UWidget;
class UWidgetManager;
class UWorld;

UCLASS(Blueprintable)
class HELIOS_API UWidgetHelper : public UObject {
    GENERATED_BODY()
public:
    UWidgetHelper();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void TriggerThanksForPlaying(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    static void ToggleGamePaused();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void SetHeliosGameState(EHeliosGameState NewState, UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    static void SetGamePaused(bool paused);
    
    UFUNCTION(BlueprintCallable)
    static void QuitGame();
    
    UFUNCTION(BlueprintCallable)
    static void PlayOneShotAudioLoadSynchronous(TSoftObjectPtr<UAkAudioEvent> AudioEvent);
    
    UFUNCTION(BlueprintCallable)
    static void PlayOneShotAudio(UAkAudioEvent* AudioEvent);
    
    UFUNCTION(BlueprintCallable)
    static void LoadLevelWithFade(TSoftObjectPtr<UWorld> levelAsset, const FString& PlayerStart, TSoftObjectPtr<UAkAudioEvent> loadingAudioState, const FString& Options);
    
    UFUNCTION(BlueprintCallable)
    static void LoadLevel(TSoftObjectPtr<UWorld> levelAsset, TSoftObjectPtr<UAkAudioEvent> loadingAudioState);
    
    UFUNCTION(BlueprintCallable)
    static void LoadAudioAsynchronous(TSoftObjectPtr<UAkAudioEvent> AudioEvent);
    
    UFUNCTION(BlueprintPure)
    static UWidgetManager* GetWidgetManager();
    
    UFUNCTION(BlueprintPure)
    static APlayerController* GetUIController();
    
    UFUNCTION(BlueprintPure)
    static FName GetNameFromLevelUIData(const FLevelUIData& LevelUIData);
    
    UFUNCTION(BlueprintPure)
    static TMap<FName, TSoftObjectPtr<UWorld>> GetLevels();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static EHeliosGameState GetHeliosGameState(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    static void BuildWidgetNavigation(EUINavigation Navigation, EUINavigationRule Rule, UWidget* From, UWidget* To);
    
};

