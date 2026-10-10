#pragma once
#include "CoreMinimal.h"
#include "ECultureEnum.h"
#include "ESKU.h"
#include "HeliosComplianceLayer.h"
#include "HeliosPS5ComplianceLayer.generated.h"

UCLASS(Blueprintable)
class HELIOS_API UHeliosPS5ComplianceLayer : public UHeliosComplianceLayer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, ESKU> sPS5SkuMapping;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESKU, ECultureEnum> sDefaultPS5LanguagePerSku;
    
public:
    UHeliosPS5ComplianceLayer();

};

