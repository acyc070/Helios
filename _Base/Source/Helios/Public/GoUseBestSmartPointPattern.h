#pragma once
#include "CoreMinimal.h"
#include "AIReactivePattern.h"
#include "ChalkboardSectionKey.h"
#include "ESmartPointType.h"
#include "GoUseBestSmartPointPattern.generated.h"

class USmartPoint;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UGoUseBestSmartPointPattern : public UAIReactivePattern {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESmartPointType mTypeOfPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mLocomotionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChalkboardSectionKey mOverrideDefaultKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mLookAtPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mCheckForMoveTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mCanTriggerIfAlerted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mAbortIfSPChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USmartPoint* mSmartPoint;
    
public:
    UGoUseBestSmartPointPattern();

};

