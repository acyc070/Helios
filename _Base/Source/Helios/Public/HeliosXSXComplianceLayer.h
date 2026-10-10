#pragma once
#include "CoreMinimal.h"
#include "HeliosComplianceLayer.h"
#include "HeliosXSXComplianceLayer.generated.h"

class UHeliosMenuWidget;

UCLASS(Blueprintable)
class HELIOS_API UHeliosXSXComplianceLayer : public UHeliosComplianceLayer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AllowGuestInterruption;
    
public:
    UHeliosXSXComplianceLayer();

protected:
    UFUNCTION()
    void OnUserLostPromptFadedOut(UHeliosMenuWidget* menuWidget);
    
    UFUNCTION()
    void OnUserLostPromptFadedIn(UHeliosMenuWidget* menuWidget);
    
    UFUNCTION()
    void OnControllerPromptFadedIn(UHeliosMenuWidget* menuWidget);
    
};

