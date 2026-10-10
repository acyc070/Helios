#pragma once
#include "CoreMinimal.h"
#include "HeliosMenuWidget.h"
#include "HintWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class HELIOS_API UHintWidget : public UHeliosMenuWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mIsShowing;
    
public:
    UHintWidget();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnShow(const FText& HintText, float DisplayTime);
    
public:
    UFUNCTION()
    void Hide();
    
};

