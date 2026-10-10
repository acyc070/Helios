#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Types/SlateEnums.h"
#include "Styling/SlateTypes.h"
#include "Components/Widget.h"
#include "AkOnFloatValueChangedEventDelegate.h"
#include "AkPropertyToControl.h"
#include "AkWwiseItemToControl.h"
#include "OnItemDropDetectedDelegate.h"
#include "OnPropertyDropDetectedDelegate.h"
#include "AkSlider.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Editor)
class AKAUDIO_API UAkSlider : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidget::FGetFloat ValueDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSliderStyle WidgetStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EOrientation> Orientation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SliderBarColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SliderHandleColor;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IndentHandle;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Locked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StepSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFocusable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAkPropertyToControl ThePropertyToControl;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAkWwiseItemToControl ItemToControl;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAkOnFloatValueChangedEvent OnValueChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemDropDetected OnItemDropped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPropertyDropDetected OnPropertyDropped;
    
    UAkSlider();

    UFUNCTION(BlueprintCallable)
    void SetValue(float inValue);
    
    UFUNCTION(BlueprintCallable)
    void SetStepSize(float inValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSliderHandleColor(FLinearColor inValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSliderBarColor(FLinearColor inValue);
    
    UFUNCTION(BlueprintCallable)
    void SetLocked(bool inValue);
    
    UFUNCTION(BlueprintCallable)
    void SetIndentHandle(bool inValue);
    
    UFUNCTION(BlueprintCallable)
    void SetAkSliderItemProperty(const FString& ItemProperty);
    
    UFUNCTION(BlueprintCallable)
    void SetAkSliderItemId(const FGuid& ItemId);
    
    UFUNCTION(BlueprintPure)
    float GetValue() const;
    
    UFUNCTION(BlueprintPure)
    FString GetAkSliderItemProperty() const;
    
    UFUNCTION(BlueprintPure)
    FGuid GetAkSliderItemId() const;
    
};

