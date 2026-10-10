#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerVolume.h"
#include "VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "GenericGameEvent.h"
#include "StreamableSublevelName.h"
#include "HeliosStreamingVolume.generated.h"

class AActor;
class AControlledPawn;
class APawn;

UCLASS(Blueprintable)
class HELIOS_API AHeliosStreamingVolume : public ATriggerVolume, public IVisualLoggerDebugSnapshotInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStreamableSublevelName mAssociatedLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStreamableSublevelName> mSublevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStreamableSublevelName> mSublevelsToPreload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mStreamoutHysteresisDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSoftClassPtr<APawn>> mPawnClassesToConsider;
    
public:
    AHeliosStreamingVolume(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnPlayerSpawned(AControlledPawn* PlayerPawn);
    
    UFUNCTION()
    void OnPlayerPawnEvent(const FGenericGameEvent& gameEvent);
    
public:
    UFUNCTION()
    void OnEndOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION()
    void OnBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
    

    // Fix for true pure virtual functions not being implemented
};

