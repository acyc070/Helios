#pragma once
#include "CoreMinimal.h"
#include "EHeliosFormatParameter.h"
#include "Templates/SubclassOf.h"
#include "FormattableTextBlockParamToWidgetClass.generated.h"

class UHeliosFormattableTextBlockParam;

USTRUCT(BlueprintType)
struct HELIOS_API FFormattableTextBlockParamToWidgetClass {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHeliosFormatParameter ParameterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHeliosFormattableTextBlockParam> AssociatedWidgetClass;
    
    FFormattableTextBlockParamToWidgetClass();
};

