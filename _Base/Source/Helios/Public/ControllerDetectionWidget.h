#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "Input/Events.h"
#include "Components/SlateWrapperTypes.h"
#include "HeliosMenuWidget.h"
#include "ControllerDetectionWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UControllerDetectionWidget : public UHeliosMenuWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLostControllerMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLostUserMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AssignedControllerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowUserChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowCancelButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWaitingForQuitConfirmation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowAccountPickerPressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> InitialInteractionButtonKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> InitialInteractionButtonKeys_Cancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> ReconnectControllerButtonKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> InitialInteractionAccountPickerButtonKeys;
    
public:
    UControllerDetectionWidget();

    UFUNCTION(BlueprintCallable)
    void ShutdownWidget();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnCancelButtonDetectedEvent();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnButtonDetectedEvent();
    
public:
    UFUNCTION(BlueprintCallable)
    FEventReply HandleKeyDown(const FKeyEvent& KeyEvent);
    
    UFUNCTION(BlueprintCallable)
    void ClearLocalUserID();
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    bool AllowMouseOrKeyboardToContinue();
    
};

