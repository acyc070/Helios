#pragma once
#include "CoreMinimal.h"
#include "PuzzlePieceActor.h"
#include "PuzzlePieceMultiStateActor.generated.h"

UCLASS(Blueprintable)
class HELIOS_API APuzzlePieceMultiStateActor : public APuzzlePieceActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mNumberOfStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mInitialState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mInitialStateProgress;
    
    APuzzlePieceMultiStateActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetStateProgress(float newStateProgress);
    
    UFUNCTION(BlueprintCallable)
    void SetState(int32 NewState, float newStateProgress);
    
    UFUNCTION(BlueprintCallable)
    void SetNumberOfStates(int32 newNumberOfStates, int32 NewState, float newStateProgress);
    
    UFUNCTION(BlueprintCallable)
    void InterpolateToStateAndProgressOverTime(bool startFromCurrent, int32 fromState, float fromStateProgress, int32 toState, float toStateProgress, float Seconds, bool scaleTimeToPartialRange);
    
    UFUNCTION(BlueprintPure)
    float GetStateProgress() const;
    
    UFUNCTION(BlueprintPure)
    void GetStateAndStateProgressAtSpecificProgress(int32& currentState, float& currentStateProgress, float Progress) const;
    
    UFUNCTION(BlueprintPure)
    void GetStateAndProgress(int32& currentState, float& currentStateProgress) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetState() const;
    
    UFUNCTION(BlueprintPure)
    float GetProgressFromStateAndStateProgress(int32 State, float stateProgress);
    
    UFUNCTION(BlueprintPure)
    int32 GetNumberOfStates() const;
    
};

