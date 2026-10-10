#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "AudioVolumeTransitionDelegate.h"
#include "OcclusionOverride.h"
#include "OcclusionValues.h"
#include "ReverbLink.h"
#include "AkAudioVolume.generated.h"

class AAkAmbientSound;
class UAkAudioEvent;
class UAkAuxBus;
class UTarEditableVolumeComponent;

UCLASS(Blueprintable)
class AKAUDIO_API AAkAudioVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> mGroups;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mMuteWhenOutsideGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mUseCameraAsActivator;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mDebugVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAuxBus* mReverbBus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mReverbSendLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FReverbLink> mLinkedVolumes;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mMaxReverbLocationUpdateDistance;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mReverbLocationUpdateRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* mAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mPreviewAmbience;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mAmbienceVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mAmbiencePitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mGlobalAmbienceVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mAmbienceFadeRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AAkAmbientSound>> mPositionalAmbiences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mOutsideOcclusionVol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mOutsideOcclusionLPF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mInsideOcclusionVol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mInsideOcclusionLPF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mUseReverbOcclusion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mReverbOcclusion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOcclusionOverride> mOcclusionOverride;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mOcclusionFadeRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mReverbAttenuationScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTarEditableVolumeComponent* mEditableVolumeComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAudioVolumeTransition onEnterAudioVolume;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAudioVolumeTransition onExitAudioVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mIsActiveVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mIsMuted;
    
    AAkAudioVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetReverbOcclusion(float inReverbOcclusion, bool useFade);
    
    UFUNCTION(BlueprintCallable)
    void SetReverbAttenuationScale(float reverbAttenuationScale);
    
    UFUNCTION(BlueprintCallable)
    void SetOutsideOcclusionVol(float inOutsideOcclusionVol, bool useFade);
    
    UFUNCTION(BlueprintCallable)
    void SetOutsideOcclusionLPF(float inOutsideOcclusionLPF, bool useFade);
    
    UFUNCTION(BlueprintCallable)
    void SetOcclusionSettings(FOcclusionValues inOcclusionValues, bool useFade);
    
    UFUNCTION(BlueprintCallable)
    void SetInsideOcclusionVol(float inInsideOcclusionVol, bool useFade);
    
    UFUNCTION(BlueprintCallable)
    void SetInsideOcclusionLPF(float inInsideOcclusionLPF, bool useFade);
    
    UFUNCTION(BlueprintCallable)
    void ResetInitialOcclusionValues(bool useFade);
    
    UFUNCTION(BlueprintCallable)
    void MuteVolume(bool useFadeRate);
    
};

