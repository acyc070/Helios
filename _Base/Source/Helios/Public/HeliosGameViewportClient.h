#pragma once
#include "CoreMinimal.h"
#include "Engine/GameViewportClient.h"
#include "EHeliosInputScheme.h"
#include "EHeliosInputType.h"
#include "LostFocusSignatureDelegate.h"
#include "OnInputTypeChangedDelegate.h"
#include "HeliosGameViewportClient.generated.h"

class UHeliosGameViewportClient;
class UObject;

UCLASS(Blueprintable, NonTransient)
class HELIOS_API UHeliosGameViewportClient : public UGameViewportClient {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInputTypeChanged OnInputTypeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLostFocusSignature OnLostFocus;
    
    UHeliosGameViewportClient();

    UFUNCTION(BlueprintCallable)
    void SetInputScheme(const EHeliosInputScheme& InScheme);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreFocusChange(bool ignoreFocusChange);
    
    UFUNCTION(BlueprintPure)
    static UHeliosGameViewportClient* GetHeliosViewport(const UObject* InWorld);
    
    UFUNCTION(BlueprintCallable)
    EHeliosInputType CurrentInputTypeAndScheme(EHeliosInputScheme& scheme);
    
    UFUNCTION(BlueprintPure)
    EHeliosInputType CurrentInputType() const;
    
};

