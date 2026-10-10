#pragma once
#include "CoreMinimal.h"
#include "AIReactivePattern.h"
#include "EAttachPoint.h"
#include "FlowControlAnimNotifyData.h"
#include "DoctorBedLiftingPattern.generated.h"

class AActor;
class UAnimInstance;
class UDeathHandlerDataAsset;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UDoctorBedLiftingPattern : public UAIReactivePattern {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDeathHandlerDataAsset> PlayerDeathHandler;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimInstance* mBedAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimInstance* mPawnAnimInstance;
    
public:
    UDoctorBedLiftingPattern();

private:
    UFUNCTION()
    void OnTargetGrabbed(EAttachPoint attachPoint, AActor* Target);
    
    UFUNCTION()
    void NotifyHit(const FFlowControlAnimNotifyData& AnimNotify);
    
};

