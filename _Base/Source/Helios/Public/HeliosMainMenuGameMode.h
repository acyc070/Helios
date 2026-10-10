#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "HeliosMainMenuGameMode.generated.h"

class UHeliosMenuWidget;

UCLASS(Blueprintable, NonTransient)
class AHeliosMainMenuGameMode : public AGameModeBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UHeliosMenuWidget> mMainMenuWidgetTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UHeliosMenuWidget> mBlackBackgrundWidgetTemplate;
    
public:
    AHeliosMainMenuGameMode(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static bool GetSkipTitleScreenFlag();
    
    UFUNCTION(BlueprintCallable)
    static void AllowSkippingNextTitleScreen();
    
};

