#pragma once
#include "CoreMinimal.h"
#include "LevelSequenceActor.h"
#include "HeliosLevelSequenceActor.generated.h"

UCLASS(Blueprintable)
class HELIOS_API AHeliosLevelSequenceActor : public ALevelSequenceActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SuppressRestartFromCheckpoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SuppressTickWhenNotPlaying;
    
    AHeliosLevelSequenceActor(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnStop();
    
    UFUNCTION()
    void OnPlay();
    
};

