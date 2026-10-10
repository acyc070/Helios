#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AIAnalyzer.h"
#include "EOnDemandDetectionType.h"
#include "NoiseEvent.h"
#include "PerceptionAnalyzer.generated.h"

class AActor;
class USensoryComponent;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UPerceptionAnalyzer : public UAIAnalyzer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mIgnoredPawnTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mTimeBeforeIdentification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mTimeBeforeIdentificationLost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mTimeBeforeLosingVision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mTimeBeforeForgetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mTimeToLoudNoiseDetection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mTimeToWeakNoiseDetection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mLoudNoiseDetectionDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mWeakNoiseDetectionDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mNoiseStrengthToIdentify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mEnabledNoiseTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mDrawDebug;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USensoryComponent* mSensors;
    
public:
    UPerceptionAnalyzer();

protected:
    UFUNCTION()
    void OnNoiseEvent(const FNoiseEvent& NoiseEvent, float EventDistance);
    
    UFUNCTION()
    void OnDetectionOnDemand(FVector Location, AActor* Actor, EOnDemandDetectionType detectionType);
    
};

