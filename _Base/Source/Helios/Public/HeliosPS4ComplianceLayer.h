#pragma once
#include "CoreMinimal.h"
#include "ECultureEnum.h"
#include "ESKU.h"
#include "HeliosComplianceLayer.h"
#include "HeliosPS4ComplianceLayer.generated.h"

UCLASS(Blueprintable)
class HELIOS_API UHeliosPS4ComplianceLayer : public UHeliosComplianceLayer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, ESKU> sSkuMapping;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESKU, ECultureEnum> sDefaultLanguagePerSku;
    
public:
    UHeliosPS4ComplianceLayer();

};

