#include "WidgetHelper.h"

UWidgetHelper::UWidgetHelper() {
}

void UWidgetHelper::TriggerThanksForPlaying(UObject* WorldContext) {
}

void UWidgetHelper::ToggleGamePaused() {
}

void UWidgetHelper::SetHeliosGameState(EHeliosGameState NewState, UObject* WorldContext) {
}

void UWidgetHelper::SetGamePaused(bool paused) {
}

void UWidgetHelper::QuitGame() {
}

void UWidgetHelper::PlayOneShotAudioLoadSynchronous(TSoftObjectPtr<UAkAudioEvent> AudioEvent) {
}

void UWidgetHelper::PlayOneShotAudio(UAkAudioEvent* AudioEvent) {
}

void UWidgetHelper::LoadLevelWithFade(TSoftObjectPtr<UWorld> levelAsset, const FString& PlayerStart, TSoftObjectPtr<UAkAudioEvent> loadingAudioState, const FString& Options) {
}

void UWidgetHelper::LoadLevel(TSoftObjectPtr<UWorld> levelAsset, TSoftObjectPtr<UAkAudioEvent> loadingAudioState) {
}

void UWidgetHelper::LoadAudioAsynchronous(TSoftObjectPtr<UAkAudioEvent> AudioEvent) {
}

UWidgetManager* UWidgetHelper::GetWidgetManager() {
    return NULL;
}

APlayerController* UWidgetHelper::GetUIController() {
    return NULL;
}

FName UWidgetHelper::GetNameFromLevelUIData(const FLevelUIData& LevelUIData) {
    return NAME_None;
}

TMap<FName, TSoftObjectPtr<UWorld>> UWidgetHelper::GetLevels() {
    return TMap<FName, TSoftObjectPtr<UWorld>>();
}

EHeliosGameState UWidgetHelper::GetHeliosGameState(UObject* WorldContext) {
    return EHeliosGameState::AppStarting;
}

void UWidgetHelper::BuildWidgetNavigation(EUINavigation Navigation, EUINavigationRule Rule, UWidget* From, UWidget* To) {
}


