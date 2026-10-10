#pragma once
#include "CoreMinimal.h"
#include "Components/RichTextBlock.h"
#include "HeliosRichTextBlock.generated.h"

UCLASS(Blueprintable)
class HELIOS_API UHeliosRichTextBlock : public URichTextBlock {
    GENERATED_BODY()
public:
    UHeliosRichTextBlock();

protected:
    UFUNCTION(BlueprintCallable)
    void ForceUpdateWidget();
    
};

