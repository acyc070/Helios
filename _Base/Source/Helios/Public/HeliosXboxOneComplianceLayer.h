#pragma once
#include "CoreMinimal.h"
#include "EPresenceString.h"
#include "HeliosComplianceLayer.h"
#include "HeliosXboxOneComplianceLayer.generated.h"

class UHeliosMenuWidget;

UCLASS(Blueprintable)
class HELIOS_API UHeliosXboxOneComplianceLayer : public UHeliosComplianceLayer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AllowGuestInterruption;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPresenceString, FString> sXboxOnePresence;
    
public:
    UHeliosXboxOneComplianceLayer();

protected:
    UFUNCTION()
    void OnUserLostPromptFadedOut(UHeliosMenuWidget* menuWidget);
    
    UFUNCTION()
    void OnUserLostPromptFadedIn(UHeliosMenuWidget* menuWidget);
    
    UFUNCTION()
    void OnControllerPromptFadedIn(UHeliosMenuWidget* menuWidget);
    
};

