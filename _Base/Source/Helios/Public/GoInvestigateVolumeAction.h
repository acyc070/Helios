#pragma once
#include "CoreMinimal.h"
#include "AIReactivePattern.h"
#include "ChalkboardSectionKey.h"
#include "LocomotionState.h"
#include "GoInvestigateVolumeAction.generated.h"

class AActor;
class UAINavigationOptionsData;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UGoInvestigateVolumeAction : public UAIReactivePattern {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocomotionState mLocomotionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAINavigationOptionsData* mNavigationOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mGoalRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChalkboardSectionKey mInvestigateVolume;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* mInvestigateVolumeActor;
    
public:
    UGoInvestigateVolumeAction();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReachedInvestigateLocation(AActor* volumeActor);
    
};

