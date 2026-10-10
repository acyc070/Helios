#pragma once
#include "CoreMinimal.h"
#include "NoiseThreshold.h"
#include "PhysicsAudioNoiseSettings.generated.h"

USTRUCT(BlueprintType)
struct FPhysicsAudioNoiseSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mEnableImpactNoise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNoiseThreshold> mImpactNoiseThresholds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mEnableSlideNoise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNoiseThreshold> mSlideNoiseThresholds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mEnableRollNoise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNoiseThreshold> mRollNoiseThresholds;
    
    TARSIERWWISERUNTIMEEXTENSION_API FPhysicsAudioNoiseSettings();
};

