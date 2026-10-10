#pragma once
#include "CoreMinimal.h"
#include "HeliosFormattableTextBlockInfo.h"
#include "HeliosWidget.h"
#include "HeliosFormattableTextBlockParam.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class HELIOS_API UHeliosFormattableTextBlockParam : public UHeliosWidget {
    GENERATED_BODY()
public:
    UHeliosFormattableTextBlockParam();

    UFUNCTION(BlueprintNativeEvent)
    void InitializeFromFormatParameterInfo(FHeliosFormattableTextBlockInfo Info);
    
};

