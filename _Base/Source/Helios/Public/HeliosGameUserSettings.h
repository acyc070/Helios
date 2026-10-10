#pragma once
#include "CoreMinimal.h"
#include "TarGameUserSettings.h"
#include "EGameQualityMode.h"
#include "HeliosGameUserSettings.generated.h"

UCLASS(Blueprintable)
class HELIOS_API UHeliosGameUserSettings : public UTarGameUserSettings {
    GENERATED_BODY()
public:
    UHeliosGameUserSettings();

    UFUNCTION(BlueprintCallable)
    void SetTimesGameCompleted(int32 TimesGameCompleted);
    
    UFUNCTION(BlueprintCallable)
    void SetOptionsLanguage(const FString& Language);
    
    UFUNCTION(BlueprintCallable)
    void SetMasterAudioVolume(float volumeValue);
    
    UFUNCTION(BlueprintCallable)
    void SetLastUsedSaveSlotIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SetHasRegisteredDefaultKeyMappings(bool HasRegistered);
    
    UFUNCTION(BlueprintCallable)
    void SetHasAcceptedEULAnPP(bool acceptEULAnPP);
    
    UFUNCTION(BlueprintCallable)
    void SetGamma(float Gamma);
    
    UFUNCTION(BlueprintCallable)
    void SetGameQualityMode(EGameQualityMode inValue);
    
    UFUNCTION(BlueprintCallable)
    void SetEquippedMaskUniqueId(const FName& UniqueId);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultSettings(bool SaveChanges);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentKeyMappingsAsDefault();
    
    UFUNCTION(BlueprintCallable)
    void SaveUserSettings();
    
    UFUNCTION(BlueprintCallable)
    void SaveKeyMappings();
    
    UFUNCTION(BlueprintCallable)
    void ResetToDefaultKeyMappings();
    
    UFUNCTION(BlueprintCallable)
    void LoadUserSettings();
    
    UFUNCTION(BlueprintCallable)
    void LoadKeyMappings();
    
    UFUNCTION(BlueprintCallable)
    bool HasRegisteredDefaultKeyMappings();
    
    UFUNCTION(BlueprintPure)
    bool HasAppliedFirstTimeDefaultSettings() const;
    
    UFUNCTION(BlueprintPure)
    bool HasAcceptedEULAnPP();
    
    UFUNCTION(BlueprintPure)
    float GetUserSavedGamma();
    
    UFUNCTION(BlueprintPure)
    int32 GetTimesGameCompleted();
    
    UFUNCTION(BlueprintCallable)
    float GetMasterAudioVolume();
    
    UFUNCTION(BlueprintPure)
    int32 GetLastUsedSaveSlotIndex() const;
    
    UFUNCTION(BlueprintPure)
    EGameQualityMode GetGameQualityMode() const;
    
    UFUNCTION(BlueprintPure)
    FName GetEquippedMaskUniqueId() const;
    
    UFUNCTION(BlueprintPure)
    float GetEngineGamma();
    
    UFUNCTION(BlueprintCallable)
    void ApplyKeyMapGroupings();
    
};

