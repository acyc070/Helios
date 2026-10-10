#pragma once
#include "CoreMinimal.h"
#include "Layout/Margin.h"
#include "EScrollBoxCustomTextWidgetType.h"
#include "ParsedText.generated.h"

USTRUCT(BlueprintType)
struct FParsedText {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EScrollBoxCustomTextWidgetType mType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText mContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin mBulletPointMargin;
    
    HELIOS_API FParsedText();
};

