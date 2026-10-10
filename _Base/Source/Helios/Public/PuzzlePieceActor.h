#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Curves/CurveFloat.h"
#include "EAIOffsetLocationMethod.h"
#include "ECustomCopyProgressTypes.h"
#include "EPuzzlePieceUsers.h"
#include "HelComponentReference.h"
#include "HeliosActor.h"
#include "PuzzlePieceAutomaticDisengageSettings.h"
#include "PuzzlePieceCondition.h"
#include "PuzzlePieceEditorDropDown.h"
#include "PuzzlePieceOnInterpolationCompletedSignatureDelegate.h"
#include "PuzzlePieceOnPieceActionSignatureDelegate.h"
#include "PuzzlePieceOnPieceActivateSignatureDelegate.h"
#include "PuzzlePieceOnPieceDeactivateSignatureDelegate.h"
#include "PuzzlePieceOnPieceLeaveBeginningSignatureDelegate.h"
#include "PuzzlePieceOnPieceLeaveEndSignatureDelegate.h"
#include "PuzzlePieceOnPieceReachBeginningSignatureDelegate.h"
#include "PuzzlePieceOnPieceReachEndSignatureDelegate.h"
#include "PuzzlePieceOnPieceStartActionSignatureDelegate.h"
#include "PuzzlePieceOnPieceStopActionSignatureDelegate.h"
#include "PuzzlePieceOnPieceUpdateEndSignatureDelegate.h"
#include "PuzzlePieceOnPieceUpdateSignatureDelegate.h"
#include "PuzzlePieceOnPieceUpdateStartSignatureDelegate.h"
#include "Templates/SubclassOf.h"
#include "PuzzlePieceActor.generated.h"

class AActor;
class AControlledPawn;
class APuzzlePieceActor;
class UAIPuzzleInteraction;
class UCurveFloat;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class HELIOS_API APuzzlePieceActor : public AHeliosActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mPuzzlePieceRequestedID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isSavingOnCheckpoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isPuzzlePieceActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSmoothControllerInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPuzzlePieceCondition> mRequiredPuzzlePieces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPuzzlePieceCondition> mPiecesToActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPuzzlePieceCondition> mPiecesToDeactivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPuzzlePieceEditorDropDown> mCopyProgressTo;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPuzzlePieceEditorDropDown> mCopyInversedProgressTo;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECustomCopyProgressTypes mCustomCopyProgress;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve mCustomCopyCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isUsableByAI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mAIUseAutomatically;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mAIIgnoreCompletionCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mAICanBeCalled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mAICallRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mAIPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mAITargetProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mAITimeToReachTargetProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mAICanDisengage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mEnableAutomaticDisengage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPuzzlePieceAutomaticDisengageSettings mAutomaticDisengageSettings;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIOffsetLocationMethod mInteractLocationOffsetMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mAILocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector mAIVectorOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHelComponentReference mAIInteractLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector mAINavProjectionBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAIPuzzleInteraction> mAIInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* mAILinkedObject;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPuzzlePieceOnPieceActivateSignature OnPuzzlePieceActivate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPuzzlePieceOnPieceDeactivateSignature OnPuzzlePieceDeactivate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPuzzlePieceOnPieceStartActionSignature OnPuzzlePieceStartAction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPuzzlePieceOnPieceActionSignature OnPuzzlePieceAction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPuzzlePieceOnPieceStopActionSignature OnPuzzlePieceStopAction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPuzzlePieceOnPieceUpdateSignature OnPuzzlePieceUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPuzzlePieceOnPieceUpdateStartSignature OnPuzzlePieceUpdateStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPuzzlePieceOnPieceUpdateEndSignature OnPuzzlePieceUpdateEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPuzzlePieceOnPieceReachEndSignature OnPuzzlePieceReachEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPuzzlePieceOnPieceLeaveEndSignature OnPuzzlePieceLeaveEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPuzzlePieceOnPieceReachBeginningSignature OnPuzzlePieceReachBeginning;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPuzzlePieceOnPieceLeaveBeginningSignature OnPuzzlePieceLeaveBeginning;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPuzzlePieceOnInterpolationCompletedSignature OnPuzzlePieceInterpolationCompleted;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCurveFloat* mCustomCopyCurveFloat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APuzzlePieceActor*> mUpdateRequesters;
    
public:
    APuzzlePieceActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static void WeldBodies(UPrimitiveComponent* Root, UPrimitiveComponent* Child);
    
    UFUNCTION(BlueprintCallable)
    void StopInterpolateProgressOverTime();
    
    UFUNCTION(BlueprintCallable)
    void StopAction(bool IsPlayer, bool isPlaypal);
    
    UFUNCTION(BlueprintCallable)
    void StartAction(bool IsPlayer, bool isPlaypal);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetPieceProgress(float Progress, bool propagating);
    
    UFUNCTION(BlueprintCallable)
    void SetPieceEnabled(bool Enabled);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetDefaultProgress(float Progress);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveWorldReloaded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePieceUpdateStart(float currentProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePieceUpdateEnd(float currentProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePieceUpdate(float deltaProgress, float currentProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePieceStopAction(bool IsPlayer, bool isPlaypal);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePieceStartAction(bool IsPlayer, bool isPlaypal);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePieceReachEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePieceReachBeginning();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePieceLeaveEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePieceLeaveBeginning();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePieceInterpolationCompleted(float finalProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePieceDeactivate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePieceActivate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePieceAction(bool IsPlayer, bool isPlaypal);
    
    UFUNCTION()
    void OnWorldReloaded();
    
    UFUNCTION(BlueprintPure)
    bool IsThisPieceBeingUsedBy(EPuzzlePieceUsers users) const;
    
    UFUNCTION(BlueprintPure)
    bool IsThisPieceBeingUsed() const;
    
    UFUNCTION(BlueprintPure)
    bool IsThisPieceActiveBP() const;
    
    UFUNCTION(BlueprintCallable)
    void InterpolateProgressOverTime(bool startFromCurrent, float fromProgress, float toProgress, float Seconds, bool scaleTimeToPartialRange);
    
    UFUNCTION(BlueprintPure)
    void GetUsersForThisPiece(bool& IsPlayer, bool& isPlaypal) const;
    
protected:
    UFUNCTION(BlueprintPure)
    float GetTimeSinceLastUsedByPlaypal() const;
    
    UFUNCTION(BlueprintPure)
    float GetTimeSinceLastUsedByPlayer() const;
    
public:
    UFUNCTION(BlueprintPure)
    FPuzzlePieceEditorDropDown GetThisPuzzlePieceBP() const;
    
    UFUNCTION(BlueprintPure)
    float GetThisPieceProgressBP() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetThisPieceActorBP();
    
protected:
    UFUNCTION(BlueprintPure)
    float GetPieceProgress() const;
    
    UFUNCTION(BlueprintPure)
    bool GetPieceEnabled() const;
    
public:
    UFUNCTION(BlueprintNativeEvent)
    bool CanAIUsePuzzlePiece(AControlledPawn* Pawn) const;
    
};

