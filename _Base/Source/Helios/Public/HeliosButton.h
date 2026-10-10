#pragma once
#include "CoreMinimal.h"
#include "Components/Button.h"
#include "OnButtonFocusedDelegate.h"
#include "OnButtonLostFocusDelegate.h"
#include "OnWidgetCachedDelegate.h"
#include "HeliosButton.generated.h"

UCLASS(Blueprintable)
class HELIOS_API UHeliosButton : public UButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWidgetCached OnWidgetCached;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnButtonFocused OnButtonFocused;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnButtonLostFocus OnButtonLostFocus;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mFadeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mMinScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mMaxScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mPressedScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mPressedFadeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mMinOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mMaxOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mShouldPlayClickSound;
    
public:
    UHeliosButton();

    UFUNCTION(BlueprintCallable)
    void SetMinOpacity(float minOpacity);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxOpacity(float maxOpacity);
    
    UFUNCTION(BlueprintCallable)
    void ResetOnCachedEvent();
    
private:
    UFUNCTION()
    void Released();
    
    UFUNCTION()
    void Pressed();
    
    UFUNCTION()
    void Clicked();
    
};

