#pragma once
#include "CoreMinimal.h"
#include "HeliosWidget.h"
#include "OnMenuPoppedInLayerDelegate.h"
#include "OnMenuPushedInLayerDelegate.h"
#include "HeliosLayerWidget.generated.h"

class UHeliosMenuWidget;
class UObject;

UCLASS(Blueprintable, EditInlineNew)
class HELIOS_API UHeliosLayerWidget : public UHeliosWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMenuPushedInLayer OnMenuPushed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMenuPoppedInLayer OnMenuPopped;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHeliosMenuWidget* mQueuedMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UHeliosMenuWidget*> mMenuStack;
    
public:
    UHeliosLayerWidget();

    UFUNCTION(BlueprintPure)
    int32 WidgetCount() const;
    
    UFUNCTION(BlueprintCallable)
    void PushMenuWidget(UHeliosMenuWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    UHeliosMenuWidget* PopMenuWidget(UObject* InWorld, bool ForcePop);
    
private:
    UFUNCTION()
    void OnMenuFadedOutDuringPush(UHeliosMenuWidget* menuWidget);
    
    UFUNCTION()
    void OnMenuFadedOutDuringPop(UHeliosMenuWidget* menuWidget);
    
    UFUNCTION()
    void OnMenuFadedIn(UHeliosMenuWidget* menuWidget);
    
    UFUNCTION()
    void OnCultureChanged();
    
public:
    UFUNCTION(BlueprintPure)
    UHeliosMenuWidget* GetWidgetAt(int32 Index) const;
    
    UFUNCTION(BlueprintCallable)
    UHeliosMenuWidget* CreateMenuWidget(UObject* InWorld, TSoftClassPtr<UHeliosMenuWidget> menuWidgetTemplate);
    
    UFUNCTION(BlueprintCallable)
    UHeliosMenuWidget* CreateAndPushMenuWidget(UObject* InWorld, TSoftClassPtr<UHeliosMenuWidget> menuWidgetTemplate);
    
};

