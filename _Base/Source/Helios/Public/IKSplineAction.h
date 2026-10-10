#pragma once
#include "CoreMinimal.h"
#include "IKAction.h"
#include "IKSplineAction.generated.h"

class USplineComponent;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UIKSplineAction : public UIKAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mUseStaticSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mIKTasksNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mMaxGrabTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mMaxGrabDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mStartingDistance;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USplineComponent* mSplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USplineComponent* mStaticSplineComponent;
    
public:
    UIKSplineAction();

protected:
    UFUNCTION(BlueprintCallable)
    void SetStaticSpline(USplineComponent* staticSpline);
    
};

