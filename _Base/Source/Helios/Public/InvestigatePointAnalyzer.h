#pragma once
#include "CoreMinimal.h"
#include "SmartPointAnalyzer.h"
#include "InvestigatePointAnalyzer.generated.h"

class USmartPoint;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UInvestigatePointAnalyzer : public USmartPointAnalyzer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mMaxDistanceToInvestigateLocation;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USmartPoint*> mValidPoints;
    
public:
    UInvestigatePointAnalyzer();

};

