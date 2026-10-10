#pragma once
#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "PuzzlePieceEditorDropDown.h"
#include "HeliosLelvelScriptActor.generated.h"

class AControlledPawn;
class UChalkboardWrapper;

UCLASS(Blueprintable)
class HELIOS_API AHeliosLelvelScriptActor : public ALevelScriptActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UChalkboardWrapper* mChalkboard;
    
public:
    AHeliosLelvelScriptActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void ReceivePieceUpdateStart(const FPuzzlePieceEditorDropDown& puzzlePiece, float currentProgress);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceivePieceUpdateEnd(const FPuzzlePieceEditorDropDown& puzzlePiece, float currentProgress);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceivePieceUpdate(const FPuzzlePieceEditorDropDown& puzzlePiece, float deltaProgress, float currentProgress);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceivePieceStopAction(const FPuzzlePieceEditorDropDown& puzzlePiece, bool IsPlayer, bool isPlaypal);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceivePieceStartAction(const FPuzzlePieceEditorDropDown& puzzlePiece, bool IsPlayer, bool isPlaypal);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceivePieceReachEnd(const FPuzzlePieceEditorDropDown& puzzlePiece);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceivePieceReachBeginning(const FPuzzlePieceEditorDropDown& puzzlePiece);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceivePieceLeaveEnd(const FPuzzlePieceEditorDropDown& puzzlePiece);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceivePieceLeaveBeginning(const FPuzzlePieceEditorDropDown& puzzlePiece);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceivePieceInterpolationCompleted(const FPuzzlePieceEditorDropDown& puzzlePiece, float finalProgress);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceivePieceDeactivate(const FPuzzlePieceEditorDropDown& puzzlePiece);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceivePieceActivate(const FPuzzlePieceEditorDropDown& puzzlePiece);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceivePieceAction(const FPuzzlePieceEditorDropDown& puzzlePiece, bool IsPlayer, bool isPlaypal);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnWorldReloaded();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayerSpawned(AControlledPawn* Player);
    
    UFUNCTION(BlueprintPure)
    UChalkboardWrapper* GetChalkboardBlueprint();
    
};

