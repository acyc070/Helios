#pragma once
#include "CoreMinimal.h"
#include "EHeliosInputScheme.h"
#include "Components/TextBlock.h"
#include "ECultureEnum.h"
#include "EHeliosInputType.h"
#include "HeliosTextBlock.generated.h"

UCLASS(Blueprintable)
class HELIOS_API UHeliosTextBlock : public UTextBlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mUseCultureFont;
    
    UHeliosTextBlock();

    UFUNCTION(BlueprintCallable)
    void SetFontSize(int32 FontSize);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomCulture(ECultureEnum Culture);
    
private:
    UFUNCTION(BlueprintCallable)
    void RebuildWidgetFont();
    
public:
    UFUNCTION(BlueprintCallable)
    void OverrideOriginalFontSize(float FontSize);
    
    UFUNCTION()
    void OnInputTypeChanged(EHeliosInputType newInputType, EHeliosInputScheme newInputScheme);
    
};

