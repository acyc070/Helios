#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AISensor.h"
#include "ENoiseSensorShape.h"
#include "NoiseEvent.h"
#include "NoiseWEventDelegateDelegate.h"
#include "SocketSelector.h"
#include "NoiseSensor.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UNoiseSensor : public UAISensor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSocketSelector mAttachSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mLoudRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mWeakRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENoiseSensorShape mSensorShape;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNoiseWEventDelegate OnNoiseEventDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mDrawDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor mWeakRadiusDebugColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor mLoudRadiusDebugColor;
    
    UNoiseSensor();

private:
    UFUNCTION()
    void OnNoiseEvent(const FNoiseEvent& NoiseEvent, float EventDistance);
    
};

