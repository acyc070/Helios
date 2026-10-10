#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimationAsset.h"
#include "Animation/AnimationAsset.h"
#include "AnimHeliosOverrideBlendspaceEntry.h"
#include "AnimHeliosBlendspaceOverridePlayData.generated.h"

USTRUCT(BlueprintType)
struct FAnimHeliosBlendspaceOverridePlayData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimHeliosOverrideBlendspaceEntry mSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mPreviousTimeAccumulator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mInternalTimeAccumulator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mIsLooping;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlendFilter mBlendFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBlendSampleData> mBlendSampleDataCache;
    
    HELIOS_API FAnimHeliosBlendspaceOverridePlayData();
};

