#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerVolume.h"
#include "CheckpointVolume.generated.h"

class AActor;
class AHeliosPlayerStart;
class UBlueprintCondition;

UCLASS(Blueprintable)
class HELIOS_API ACheckpointVolume : public ATriggerVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHeliosPlayerStart* mPlayerStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBlueprintCondition* mOnlyCheckpointIfFullfilled;
    
public:
    ACheckpointVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void OnOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintPure)
    bool HasAlreadyTriggered() const;
    
};

