#pragma once
#include "CoreMinimal.h"
#include "AIReactivePattern.h"
#include "ShootAfterAimingPattern.generated.h"

class UFirearmComponent;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UShootAfterAimingPattern : public UAIReactivePattern {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mAimingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mMaxLostLOFTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mPauseTimeAfterShot;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFirearmComponent* mFirearm;
    
public:
    UShootAfterAimingPattern();

};

