#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "AIAnalyzer.h"
#include "EHeightLevel.h"
#include "FlowControlAnimNotifyData.h"
#include "GrabLevelSettings.h"
#include "GrabAnalyzer.generated.h"

class AActor;
class UFlowControlComponent;
class UGrabActorComponent;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UGrabAnalyzer : public UAIAnalyzer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> mOverrideGrabChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mRefreshGrabStartNotify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UsePrediction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseAbort;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseRaycast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AbortRadiusMultiplayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForwardGrabOffset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHeightLevel, FGrabLevelSettings> mGrabData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* mTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UGrabActorComponent> mGrabComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFlowControlComponent> mFlowControl;
    
public:
    UGrabAnalyzer();

private:
    UFUNCTION()
    void OnGrabStarted(float Timestamp);
    
    UFUNCTION()
    void OnGrabIntentChanged(bool newIntent);
    
    UFUNCTION()
    void NotifyHit(const FFlowControlAnimNotifyData& AnimNotify);
    
};

