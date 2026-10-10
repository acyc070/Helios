#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ENoiseStrength.h"
#include "EStimulusSource.h"
#include "SoftEnumName.h"
#include "Stimulus.generated.h"

USTRUCT(BlueprintType)
struct FStimulus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector mLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mDetectionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStimulusSource mStimulusSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENoiseStrength mNoiseStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mStimulusTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftEnumName mStimulusID;
    
    HELIOS_API FStimulus();
};

