#pragma once
#include "CoreMinimal.h"
#include "Layout/Geometry.h"
#include "Input/Events.h"
#include "EHeliosInputScheme.h"
#include "EHeliosInputType.h"
#include "EMenuFadeState.h"
#include "EMenuFlowDirection.h"
#include "HeliosWidget.h"
#include "OnMenuWidgetFadedInDelegate.h"
#include "OnMenuWidgetFadedOutDelegate.h"
#include "OnMenuWidgetFocusChangedDelegate.h"
#include "OnMenuWidgetStartFadingInDelegate.h"
#include "HeliosMenuWidget.generated.h"

class UHeliosLayerWidget;
class UHeliosMenuWidget;
class UPanelWidget;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class HELIOS_API UHeliosMenuWidget : public UHeliosWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMenuWidgetStartFadingIn OnMenuStartFadingIn;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMenuWidgetFadedIn OnMenuWidgetFadedIn;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMenuWidgetFadedOut OnMenuWidgetFadedOut;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMenuWidgetFocusChanged OnMenuWidgetFocusChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mFadeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mShowMouseCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mShouldPlayBackSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mForceFocusOnButtonPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UWidget*> mForceFocusAddOns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMenuFlowDirection mFlowDirection;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mInitialFocusedItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* ButtonPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHeliosLayerWidget* mLayerWidget;
    
public:
    UHeliosMenuWidget();

private:
    UFUNCTION()
    void OnStartFadingIn(UHeliosMenuWidget* Widget);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetupMenu();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPostNavigationBuilt();
    
public:
    UFUNCTION(BlueprintNativeEvent)
    void OnMenuPushed();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnMenuPopped();
    
private:
    UFUNCTION()
    void OnInputTypeChanged(EHeliosInputType newInputType, EHeliosInputScheme newInputScheme);
    
    UFUNCTION()
    void OnFadedIn(UHeliosMenuWidget* Widget);
    
public:
    UFUNCTION(BlueprintNativeEvent)
    void OnClickedBack(const FGeometry& InGeometry, const FKeyEvent& InKeyEvent);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnCleanupMenu();
    
public:
    UFUNCTION(BlueprintPure)
    UHeliosLayerWidget* GetLayerWidget() const;
    
    UFUNCTION(BlueprintPure)
    EMenuFadeState GetFadeState();
    
    UFUNCTION(BlueprintPure)
    UWidget* GetCurrentFocusedWidget() const;
    
};

