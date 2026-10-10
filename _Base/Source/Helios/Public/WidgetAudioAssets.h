#pragma once
#include "CoreMinimal.h"
#include "WidgetAudioAssets.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct HELIOS_API FWidgetAudioAssets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> ButtonFocusedAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> ButtonClickedAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> MenuClosedAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> GameStartedAudioEvent;
    
    FWidgetAudioAssets();
};

