#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OnLocaleChangedDelegate.h"
#include "OnMenuPoppedDelegate.h"
#include "OnMenuPushedDelegate.h"
#include "OnRestartFromTitleScreenDelegate.h"
#include "WidgetManager.generated.h"

class UHeliosMenuWidget;

UCLASS(Blueprintable)
class HELIOS_API UWidgetManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLocaleChanged OnLocaleChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMenuPushed OnMenuPushed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMenuPopped OnMenuPopped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRestartFromTitleScreen OnRestartFromTitleScreen;
    
    UWidgetManager();

private:
    UFUNCTION()
    void WidgetLayerMenuPushed(UHeliosMenuWidget* menuWidget);
    
    UFUNCTION()
    void WidgetLayerMenuPopped(UHeliosMenuWidget* menuWidget);
    
public:
    UFUNCTION(BlueprintCallable)
    void ShowHintWidget(UObject* InWorld, FText HintText, float DisplayTime);
    
    UFUNCTION(BlueprintCallable)
    UHeliosMenuWidget* SetBackgroundWidget(UObject* InWorld, TSoftClassPtr<UHeliosMenuWidget> menuWidgetTemplate);
    
    UFUNCTION(BlueprintCallable)
    void PushMenuWidget(UHeliosMenuWidget* menuWidget);
    
    UFUNCTION(BlueprintCallable)
    void PopMenuWidget(UObject* InWorld);
    
    UFUNCTION(BlueprintCallable)
    void PopAllMenuWidgets(UObject* InWorld);
    
    UFUNCTION(BlueprintCallable)
    void HideTargetHintWidget(UObject* InWorld, FText hintToHide);
    
    UFUNCTION(BlueprintCallable)
    void HideHintWidget(UObject* InWorld);
    
    UFUNCTION(BlueprintCallable)
    UHeliosMenuWidget* CreateMenuWidget(UObject* InWorld, TSoftClassPtr<UHeliosMenuWidget> menuWidgetTemplate);
    
    UFUNCTION(BlueprintCallable)
    UHeliosMenuWidget* CreateAndPushMenuWidget(UObject* InWorld, TSoftClassPtr<UHeliosMenuWidget> menuWidgetTemplate);
    
    UFUNCTION(BlueprintCallable)
    void ClearBackgroundWidget(UObject* InWorld);
    
};

