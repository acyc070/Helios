#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/GameUserSettings.h"
#include "GameFramework/GameUserSettings.h"
#include "ETarsierGraphicsQualityLevel.h"
#include "ETarsierPresetGraphicsQualityLevel.h"
#include "GraphicsSettingsMap.h"
#include "TarGameUserSettings.generated.h"

class UTarInputKeyMapper;

UCLASS(Blueprintable)
class TARSIERUTILITIES_API UTarGameUserSettings : public UGameUserSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETarsierGraphicsQualityLevel AntiAliasingQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETarsierGraphicsQualityLevel BloomQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETarsierGraphicsQualityLevel PostProcessingQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETarsierGraphicsQualityLevel ShadowQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETarsierGraphicsQualityLevel TextureQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETarsierGraphicsQualityLevel EffectsQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETarsierGraphicsQualityLevel AmbientOcclusionQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETarsierGraphicsQualityLevel DepthOfFieldQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETarsierGraphicsQualityLevel RayTracingQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGraphicsSettingsMap GraphicsSettingsMap;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PCFirstTimeLaunch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTarInputKeyMapper* KeyMapper;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectedDisplay;
    
public:
    UTarGameUserSettings();

    UFUNCTION(BlueprintPure)
    FIntPoint StringToResolution(const FString& resolutionString);
    
    UFUNCTION(BlueprintCallable)
    void SetWindowMode(TEnumAsByte<EWindowMode::Type> windowMode);
    
    UFUNCTION(BlueprintCallable)
    void SetTarsierTextureQuality(ETarsierGraphicsQualityLevel QualityLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetTarsierShadowQuality(ETarsierGraphicsQualityLevel QualityLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetTarsierRayTracingQuality(ETarsierGraphicsQualityLevel QualityLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetTarsierQualityPreset(ETarsierPresetGraphicsQualityLevel presetLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetTarsierPostProcessingQuality(ETarsierGraphicsQualityLevel QualityLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetTarsierEffectsQuality(ETarsierGraphicsQualityLevel QualityLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetTarsierDepthOfFieldQuality(ETarsierGraphicsQualityLevel QualityLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetTarsierBloomQuality(ETarsierGraphicsQualityLevel QualityLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetTarsierAntiAliasingQuality(ETarsierGraphicsQualityLevel QualityLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetTarsierAmbientOcclusionQuality(ETarsierGraphicsQualityLevel QualityLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetResolution(int32 Width, int32 Height);
    
    UFUNCTION(BlueprintCallable)
    void SetDesiredDisplay(int32 displayIndex);
    
    UFUNCTION(BlueprintCallable)
    void SaveToConfigFile();
    
    UFUNCTION(BlueprintPure)
    FText ResolutionToText(int32 resolutionX, int32 resolutionY);
    
    UFUNCTION(BlueprintPure)
    FString ResolutionToString(int32 resolutionX, int32 resolutionY);
    
    UFUNCTION(BlueprintPure)
    bool IsRayTracingAvailable();
    
    UFUNCTION(BlueprintPure)
    ETarsierGraphicsQualityLevel GetTarsierTextureQuality() const;
    
    UFUNCTION(BlueprintPure)
    ETarsierGraphicsQualityLevel GetTarsierShadowQuality() const;
    
    UFUNCTION(BlueprintPure)
    ETarsierGraphicsQualityLevel GetTarsierRayTracingQuality() const;
    
    UFUNCTION(BlueprintPure)
    ETarsierPresetGraphicsQualityLevel GetTarsierQualityPreset() const;
    
    UFUNCTION(BlueprintPure)
    ETarsierGraphicsQualityLevel GetTarsierPostProcessingQuality() const;
    
    UFUNCTION(BlueprintPure)
    ETarsierGraphicsQualityLevel GetTarsierEffectsQuality() const;
    
    UFUNCTION(BlueprintPure)
    ETarsierGraphicsQualityLevel GetTarsierDepthOfFieldQuality() const;
    
    UFUNCTION(BlueprintPure)
    ETarsierGraphicsQualityLevel GetTarsierBloomQuality() const;
    
    UFUNCTION(BlueprintPure)
    ETarsierGraphicsQualityLevel GetTarsierAntiAliasingQuality() const;
    
    UFUNCTION(BlueprintPure)
    ETarsierGraphicsQualityLevel GetTarsierAmbientOcclusionQuality() const;
    
    UFUNCTION(BlueprintPure)
    bool GetSupportedScreenResolutions(TArray<FString>& Resolutions);
    
    UFUNCTION(BlueprintPure)
    UTarInputKeyMapper* GetKeyMapper() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetDesiredDisplay();
    
    UFUNCTION(BlueprintPure)
    bool GetAvailableDisplays(TArray<FString>& displays);
    
    UFUNCTION(BlueprintCallable)
    void ApplyVSync();
    
    UFUNCTION(BlueprintCallable)
    void ApplyScreenSettings();
    
    UFUNCTION(BlueprintCallable)
    bool ApplyGraphicsSettings();
    
    UFUNCTION(BlueprintCallable)
    void ApplyDisplaySettings();
    
};

