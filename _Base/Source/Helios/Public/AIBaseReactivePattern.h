#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "AIAudioState.h"
#include "ChalkboardSectionKey.h"
#include "CharacterAudioEvent.h"
#include "EAIActionStatus.h"
#include "EAIAlertState.h"
#include "EAIPatternEventDrivenEvaluation.h"
#include "EPatternPriority.h"
#include "PatternDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "AIBaseReactivePattern.generated.h"

class AControlledPawn;
class APawn;
class UAIAnimator;
class UAIBaseReactivePattern;
class UAILookinator;
class UAINavigator;
class UAIPatternBrain;
class UChalkboardWrapper;

UCLASS(Abstract, Blueprintable, CollapseCategories, DefaultToInstanced, EditInlineNew)
class HELIOS_API UAIBaseReactivePattern : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SimpleDisplay, meta=(AllowPrivateAccess=true))
    bool mActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SimpleDisplay, meta=(AllowPrivateAccess=true))
    FName mName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SimpleDisplay, meta=(AllowPrivateAccess=true))
    EPatternPriority mPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SimpleDisplay, meta=(AllowPrivateAccess=true))
    int32 mPriorityModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SimpleDisplay, meta=(AllowPrivateAccess=true))
    bool mInterrupter;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval mInitialDelay;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval mCooldown;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval mEvaluationInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIPatternEventDrivenEvaluation mEventDrivenEvaluation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChalkboardSectionKey mEventDrivingChalkboardKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIAudioState mAIAudioState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterAudioEvent mCharacterAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SimpleDisplay, meta=(AllowPrivateAccess=true))
    int32 mResources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChalkboardSectionKey mRequiredHint;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SimpleDisplay, Transient, meta=(AllowPrivateAccess=true))
    UAIPatternBrain* mBrain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APawn* mPawnSelf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SimpleDisplay, meta=(AllowPrivateAccess=true))
    EAIActionStatus mStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SimpleDisplay, Transient, meta=(AllowPrivateAccess=true))
    UChalkboardWrapper* AIChalkboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SimpleDisplay, Transient, meta=(AllowPrivateAccess=true))
    UAIAnimator* Animator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SimpleDisplay, Transient, meta=(AllowPrivateAccess=true))
    AControlledPawn* ControlledPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SimpleDisplay, Transient, meta=(AllowPrivateAccess=true))
    UAINavigator* Navigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SimpleDisplay, Transient, meta=(AllowPrivateAccess=true))
    APawn* Pawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SimpleDisplay, Transient, meta=(AllowPrivateAccess=true))
    UAILookinator* mLookinator;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAIBaseReactivePattern* mRootParentPattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAIBaseReactivePattern* mParentPattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAIBaseReactivePattern*> mSpawnedPatterns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAIBaseReactivePattern*> mDependentPatterns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAIBaseReactivePattern* mPreviousPatternInSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAIBaseReactivePattern* mNextPatternInSequence;
    
    // UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    // Missed Property: mDynamicStopDelegates
    // FunctionSignature is nullptr, cannot deduce function for 'DelegateProperty mDynamicStopDelegates./Script/Helios.AIBaseReactivePattern:mDynamicStopDelegates'

    
public:
    UAIBaseReactivePattern();

    UFUNCTION(BlueprintCallable)
    void TriggerCharracterAudioEvent(FCharacterAudioEvent CharacterAudioEvent);
    
    UFUNCTION(BlueprintCallable)
    void TerminateWithDelay(float Delay, bool success);
    
    UFUNCTION(BlueprintCallable)
    void Terminate(bool success);
    
    UFUNCTION(BlueprintCallable)
    UAIBaseReactivePattern* SpawnDynamicReactivePattern(TSubclassOf<UAIBaseReactivePattern> patternClass, const FPatternDelegate& NewOnStop, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    UAIBaseReactivePattern* SpawnDynamicPattern(TSubclassOf<UAIBaseReactivePattern> patternClass, const FPatternDelegate& NewOnStop, bool independent, bool propagateSuccess, bool propagateFailure, float Timeout, UAIBaseReactivePattern* Previous);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnUpdate();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStop();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStart();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSpawnedPatternStopped_Blueprint(UAIBaseReactivePattern* spawnedPattern);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInitialization();
    
public:
    UFUNCTION(BlueprintNativeEvent)
    bool OnEvaluate() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPreviousAIAlertState(EAIAlertState State) const;
    
    UFUNCTION(BlueprintPure)
    bool IsAIAlertState(EAIAlertState State) const;
    
    UFUNCTION(BlueprintPure)
    bool HasRunForAtLeast(float TimeSeconds) const;
    
    UFUNCTION(BlueprintPure)
    float GetTimeRunning() const;
    
    UFUNCTION(BlueprintPure)
    EAIActionStatus GetStatus() const;
    
    UFUNCTION(BlueprintPure)
    float GetStartingTime() const;
    
    UFUNCTION(BlueprintPure)
    EAIAlertState GetPreviousAIAlertState() const;
    
    UFUNCTION(BlueprintPure)
    EAIAlertState GetAIAlertState() const;
    
    UFUNCTION(BlueprintCallable)
    void AICancelInvestigation();
    
};

