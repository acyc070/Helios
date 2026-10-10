#include "HeliosComplianceLayer.h"

UHeliosComplianceLayer::UHeliosComplianceLayer() {
    this->mWorldContext = NULL;
}

bool UHeliosComplianceLayer::ShowLoginUI(int32 ControllerId) {
    return false;
}

void UHeliosComplianceLayer::SetPresenceString(FLevelNameReference LevelName) {
}

void UHeliosComplianceLayer::SetActiveTitleScreen(UHeliosMenuWidget* titleScreen) {
}

void UHeliosComplianceLayer::ResetInitialInteraction() {
}

void UHeliosComplianceLayer::OnReturningFromEndCredits() {
}

void UHeliosComplianceLayer::OnGameIsUnsuspending() {
}

void UHeliosComplianceLayer::OnGameIsSuspending() {
}

void UHeliosComplianceLayer::OnGameIsEnteringForeground() {
}

void UHeliosComplianceLayer::OnGameIsEnteringBackground() {
}

void UHeliosComplianceLayer::OnControllerPromptFadedOut(UHeliosMenuWidget* menuWidget) {
}

bool UHeliosComplianceLayer::OnControllerConnectResume() {
    return false;
}

void UHeliosComplianceLayer::OnControllerConnectionChange(bool IsConnected, int32 platformId, int32 ControllerId) {
}

bool UHeliosComplianceLayer::IsUserDiscoveredWithRefresh() const {
    return false;
}

bool UHeliosComplianceLayer::IsUserDiscovered() const {
    return false;
}

bool UHeliosComplianceLayer::IsInterruptPromptActive() const {
    return false;
}

void UHeliosComplianceLayer::InitialInteraction(UObject* WorldContextObject, int32 ControllerId, FLatentActionInfo LatentInfo, EComplianceInitialInteractionResults& playerSelection) {
}

EDiscoveryState UHeliosComplianceLayer::GetUserDiscoveryState() const {
    return EDiscoveryState::NotDiscovered;
}

FString UHeliosComplianceLayer::GetPlayerNickname() const {
    return TEXT("");
}

int32 UHeliosComplianceLayer::GetMainControllerId() const {
    return 0;
}

bool UHeliosComplianceLayer::GetIsTrialGameLicense() const {
    return false;
}

FString UHeliosComplianceLayer::GetCachedPlayerNickname() const {
    return TEXT("");
}


