#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/LatentActionManager.h"
#include "EComplianceInitialInteractionResults.h"
#include "EDiscoveryState.h"
#include "LevelNameReference.h"
#include "HeliosComplianceLayer.generated.h"

class UHeliosMenuWidget;
class UWorld;

UCLASS(Blueprintable, Config=Game)
class HELIOS_API UHeliosComplianceLayer : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWorld* mWorldContext;
    
public:
    UHeliosComplianceLayer();

    UFUNCTION(BlueprintCallable)
    bool ShowLoginUI(int32 ControllerId);
    
    UFUNCTION(BlueprintCallable)
    void SetPresenceString(FLevelNameReference LevelName);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveTitleScreen(UHeliosMenuWidget* titleScreen);
    
    UFUNCTION(BlueprintCallable)
    void ResetInitialInteraction();
    
    UFUNCTION(BlueprintCallable)
    void OnReturningFromEndCredits();
    
protected:
    UFUNCTION()
    void OnGameIsUnsuspending();
    
    UFUNCTION()
    void OnGameIsSuspending();
    
    UFUNCTION()
    void OnGameIsEnteringForeground();
    
    UFUNCTION()
    void OnGameIsEnteringBackground();
    
    UFUNCTION()
    void OnControllerPromptFadedOut(UHeliosMenuWidget* menuWidget);
    
public:
    UFUNCTION(BlueprintCallable)
    bool OnControllerConnectResume();
    
protected:
    UFUNCTION()
    void OnControllerConnectionChange(bool IsConnected, int32 platformId, int32 ControllerId);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsUserDiscoveredWithRefresh() const;
    
    UFUNCTION(BlueprintPure)
    bool IsUserDiscovered() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInterruptPromptActive() const;
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    void InitialInteraction(UObject* WorldContextObject, int32 ControllerId, FLatentActionInfo LatentInfo, EComplianceInitialInteractionResults& playerSelection);
    
    UFUNCTION(BlueprintPure)
    EDiscoveryState GetUserDiscoveryState() const;
    
    UFUNCTION(BlueprintPure)
    FString GetPlayerNickname() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMainControllerId() const;
    
    UFUNCTION(BlueprintPure)
    bool GetIsTrialGameLicense() const;
    
    UFUNCTION(BlueprintPure)
    FString GetCachedPlayerNickname() const;
    
};

