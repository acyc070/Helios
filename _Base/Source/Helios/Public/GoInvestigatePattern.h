#pragma once
#include "CoreMinimal.h"
#include "AIReactivePattern.h"
#include "EAIAlertState.h"
#include "EHeightLevel.h"
#include "ESmartPointType.h"
#include "Templates/SubclassOf.h"
#include "GoInvestigatePattern.generated.h"

class UAIActionPattern;
class UAIBaseReactivePattern;
class UAINavigationOptionsData;
class UAnimSequenceBase;
class UGoInvestigateLocationAction;
class UGoUseSmartPointAction;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UGoInvestigatePattern : public UAIReactivePattern {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIAlertState mAIAlertState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESmartPointType mSmartPointType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAINavigationOptionsData* mNavOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mInvestigateGoalRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHeightLevel, UAnimSequenceBase*> mHeightLevelsAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mPatrolAfterInvestigation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAIActionPattern> mPatrolPatternClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UGoInvestigateLocationAction* mInvestigateLocationPattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UGoUseSmartPointAction* mInvestigateSmartPointPattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAIBaseReactivePattern* mPatrolPattern;
    
public:
    UGoInvestigatePattern();

};

