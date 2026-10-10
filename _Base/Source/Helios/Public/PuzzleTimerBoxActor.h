#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EPuzzleTimerBoxResetType.h"
#include "PuzzlePieceActor.h"
#include "PuzzleTimerBoxActor.generated.h"

class AActor;
class UPrimitiveComponent;
class UTarEditableVolumeComponent;

UCLASS(Blueprintable)
class HELIOS_API APuzzleTimerBoxActor : public APuzzlePieceActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool doTriggerWithPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool doTriggerWithPlaypal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool doTriggerWithOthers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mTimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPuzzleTimerBoxResetType mResetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanResetOnLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTarEditableVolumeComponent* mRootBoxComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> mOverlapActors;
    
public:
    APuzzleTimerBoxActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ResumeTimerBox();
    
    UFUNCTION(BlueprintCallable)
    void PauseTimerBox();
    
    UFUNCTION()
    void OnBoxComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnBoxComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintPure)
    float GetCurrentTimeFromProgress() const;
    
    UFUNCTION(BlueprintPure)
    TArray<AActor*> GetActorsInCollider() const;
    
};

