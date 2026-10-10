#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "AIAnalyzer.h"
#include "HighInvestigateAnalyzer.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UHighInvestigateAnalyzer : public UAIAnalyzer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mTestSphereRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mVerticalPaddingDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> mTestSphereChannel;
    
    UHighInvestigateAnalyzer();

};

